# LearnCAndSystem

## Set up Ubuntu 22.04 
Create shared directory between VM and host OS. Ensure your vm has the latest package information

    sudo apt-get update

Install VMware Tools on GUI-Based Ubuntu

    sudo apt-get install open-vm-tools-desktop

Install VMware Tools on Terminal-Based Ubuntu

    sudo apt-get install open-vm-tools

Reboot the VM 
    
    sudo reboot

Persistent the mounting of shared directory in VM at boot time. Add the following line in ```/etc/fstab```

    vmhgfs-fuse /mnt/hgfs fuse defaults,allow_other 0 0

Browse to the Host Guest File System (HGFS) folder to ensure the shared directory is in ```/etc/mnt/hgfs```