# IOMMU Deferred Invalidation Vulnerability: Exploit and Defense
These are the artifacts for our paper on IOMMU deferred invalidation vulnerability that will be presented at the Design, Automation and Test in Europe (DATE) 2024 conference. 
In this work, we present a proof-of-concept exploit for deferred invalidation vulnerability on a QEMU-emulated system, which demonstrates that a malicious device (NIC) can leak the data of other devices (SATA storage device in our exploit) connected to the system. 
We also propose hardware-assisted mitigation for this vulnerability, which involves minor changes to the existing IOMMU hardware and driver. 
Please refer to the paper for more details on the exploit and mitigation. 
The following sections will provide details on how to run the exploit using QEMU, with and without the mitigation enabled.

## Prerequisites and Setup
All experiments in this work were performed in an x86 host machine with **Ubuntu 22.04**. 
We suggest using the same host OS to avoid running into software version issues. 

### Prerequisites for QEMU and Linux kernel compilation
```
sudo apt update
sudo apt install make gcc flex bison libncurses-dev libelf-dev libssl-dev git libglib2.0-dev libfdt-dev libpixman-1-dev zlib1g-dev ninja-build meson
```
### Setup
We used QEMU version 6.2.0 and Linux kernel 6.4 for this work. linux and qemu directories in this repo contain these software along with our modifications. Take a look at the commit history to see the specific changes we made to the original source code of Linux and QEMU. 
## Exploiting Deferred Invalidation Vulnerability (DIV)
We emulated the system shown in Figure 1 to demonstrate the DIV exploit. 
The Network Interface Card (NIC) device in QEMU was changed to integrate the malicious behavior. 

The following file was modified to add the malicious behavior:
```
qemu/hw/net/e1000e_core.c
```
Malicious behavior is enabled by the ```#define IOMMU_EXPLOIT``` at the beginning of this file. 
You can comment this line to disable the malicious behavior. 
Please refer to the paper for the specific details on why the exploit is implemented this way. 

### Running the exploit
We first need to build the Linux kernel and QEMU (with the malicious NIC) to run the exploit. 
Linux kernel config we used is already provided at ```linux/.config```
#### Compiling the Linux kernel:
```
cd linux
make -j`nproc`
cd -
```
Once the compilation is successful, you should see the kernel image at ```linux/arch/x86/boot/bzImage```, which we will use to boot Linux in QEMU. 

#### Compiling QEMU:
```
./configure --enable-trace-backends=log --prefix=$PWD/build
make -j`nproc` install
export PATH=$PWD/build/bin:$PATH
cd -
```

#### Running QEMU:
We need a disk image to boot Linux on QEMU. You can create your own image by following the instructions here: https://github.com/google/syzkaller/blob/master/docs/linux/setup_ubuntu-host_qemu-vm_x86-64-kernel.md
We also have an image with all the files that are required to run the exploit, we recommend using that. 
Downloading the disk image:
```
wget -O qemu-bullseye.img.tar.gz "https://drive.usercontent.google.com/download?id=1vIfskd061ynoQS7H3oAXJSMtTozgk5bC&export=download&authuser=1&confirm=t&uuid=aa1384be-085d-4d63-a4ec-77631df26c89&at=APZUnTV-YjkjnI6MTKDeyTgteCf_%3A1711217728037"
# if you prefer to use the browser to download the disk image, use the link: https://drive.google.com/file/d/1vIfskd061ynoQS7H3oAXJSMtTozgk5bC/view?usp=drive_link
tar -xvf qemu-bullseye.img.tar.gz
```

Since we are using kvm to run QEMU, we first need to set kvm access permission.
```
sudo usermod -a -G kvm $USER
```
We need to log out and log in again for this permission change to take effect. After logging back in, execute the run.sh script to run QEMU. 
```
# Adding QEMU to the path again since we logged out
export PATH=$PWD/build/bin:$PATH
./run.sh
```

## Enabling the Mitigation
