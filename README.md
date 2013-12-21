ekernel
=======

kernel programming learning

How to install git in ubuntu?
	http://askubuntu.com/questions/279172/upgrade-git-on-ubuntu-10-04-lucid-lynx

Compile kernel and create package ubuntu
	make -j `getconf _NPROCESSORS_ONLN` deb-pkg LOCALVERSION=-custom

Install the compiled kernel
	sudo dpkg -i linux-image-2.6.24-rc5-custom_2.6.24-rc5-custom-10.00.Custom_i386.deb
	sudo dpkg -i linux-headers-2.6.24-rc5-custom_2.6.24-rc5-custom-10.00.Custom_i386.deb
