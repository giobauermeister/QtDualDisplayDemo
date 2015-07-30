# qt-dual-display-demo

This demo aims to provide an overview of the capabilites which Toradex Colibri iMX6 module has to run applications  on an LCD display and stream videos on a HDMI monitor. 

##Steps to run the demo##

Please follow this article to setup Qt development environment.

http://developer.toradex.com/how-to/how-to-set-up-qt-creator-to-cross-compile-for-embedded-linux

Download source code from this git repository.

##OpenEmbedded

That example probably will be included on meta-toradex-extra on:

https://github.com/toradex

To add that packege you have to add on local.conf

IMAGE_INSTALL_append = " qt-dual-display-demo "

By default that recipe configure the screen size to 800x480. Other screen resolutions have to be implemented.


<a href="https://drive.google.com/uc?export=view&id=0B7uO0jJfbFQINWt0Z1pGcUs3V2s"><img src="https://drive.google.com/uc?export=view&id=0B7uO0jJfbFQINWt0Z1pGcUs3V2s"/></a>

<a href="https://drive.google.com/uc?export=view&id=0B7uO0jJfbFQIZERWZzVNZnNmRjA"><img src="https://drive.google.com/uc?export=view&id=0B7uO0jJfbFQIZERWZzVNZnNmRjA"/></a>

<a href="https://drive.google.com/uc?export=view&id=0B7uO0jJfbFQIY1B5UDEtTE5PQlVXSEVXanlWZW4xYVhuR2pN"><img src="https://drive.google.com/uc?export=view&id=0B7uO0jJfbFQIY1B5UDEtTE5PQlVXSEVXanlWZW4xYVhuR2pN"/></a>
