# qt-dual-display-demo

This demo aims to provide an overview of the capabilites which Toradex Colibri iMX6 module has to run applications  on dual display eg. LCD display and HDMI monitor. 

##Steps to run the demo##

Please follow this article to setup Qt development environment.

http://developer.toradex.com/how-to/how-to-set-up-qt-creator-to-cross-compile-for-embedded-linux

Download source code from this git repository.

##OpenEmbedded

That example probably will be included on meta-toradex-extra on:

https://github.com/toradex

To add that packege you have to add on local.conf

IMAGE_INSTALL_append = " qt-dual-display-demo "

By default that recipe configure the screen size to 800x480.

You have also the option to use 1024x600, to do it change the file:

vi meta-toradex-extra/recipes-qt/qt-automotive-cluster-demo/qt-dual-display-demo_0.1.bb

--EXTRA_QMAKEVARS_PRE += "CONFIG+=no-webcam"  
++EXTRA_QMAKEVARS_PRE += "CONFIG+=no-webcam DEFINES+=RESOLUTION_1024x600"
