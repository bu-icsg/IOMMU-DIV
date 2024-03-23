qemu-system-x86_64 -msg timestamp=on --trace events=./events \
	-machine q35,accel=kvm,kernel-irqchip=split -m 512M \
	-device intel-iommu,intremap=on  -netdev user,id=net0 \
	-device e1000e,netdev=net0 -smp 2 -kernel linux/arch/x86/boot/bzImage \
	-append "console=ttyS0 root=/dev/sda earlyprintk=serial net.ifnames=0 intel_iommu=on iommu.strict=0" \
	-hda qemu-bullseye.img \
	-snapshot \
	-nographic 2> qemu_trace.exploit.log
