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

```

## Enabling the Mitigation
