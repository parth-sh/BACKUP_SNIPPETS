## target driver (intel integrated sensor solution driver) 
https://h30434.www3.hp.com/t5/Notebook-Hardware-and-Upgrade-Questions/Keyboard-Works-in-BIOS-but-not-Windows-10/td-p/6360078

https://h30434.www3.hp.com/t5/Notebook-Hardware-and-Upgrade-Questions/X360-Keyboard-Not-Working/m-p/6742666/highlight/false#M464137

## list all drivers
lspci -v
or-----
lsmod
or-----
sudo lshw


## black listing drivers (How to blacklist kernel modules?)
https://www.reddit.com/r/linuxquestions/comments/fzyvvy/disable_intel_integrated_sensor_hub_ish/
blacklist intel_ish_ipc to /etc/modprobe.d/blacklist.conf (might be different if not ubuntu) and then run update-initramfs -u


https://askubuntu.com/questions/110341/how-to-blacklist-kernel-modules

sudo nano /etc/modprobe.d/blacklist.conf

blacklist intel_ish_ipc

sudo update-initramfs -u

rm -rf /sys/module/intel_ish_ipc
sudo rmmod intel_ish_ipc