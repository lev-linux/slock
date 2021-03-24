slock - simple screen locker
============================
simple screen locker utility for X.


Requirements
------------
In order to build slock you need the Xlib header files.


Installation
------------
Edit config.mk to match your local setup (slock is installed into
the /usr/local namespace by default).

Afterwards enter the following command to build and install slock
(if necessary as root):

    make clean install


Running slock
-------------
Simply invoke the 'slock' command. To get out of it, enter your password.

Actually using it
-----------------
Put something like `/usr/local/bin/slock & zzz` in your `/etc/acpi/handler.sh` in sleep section or if you are using a script to sleep your PC put `slock & zzz` in its command

Features of this fork
---------------------
* Control clear: slock will no longer change to the failure color if a control key is pressed while the buffer is empty
* DPMS: interacts with the Display Power Management Signaling and automatically turns off the monitor after a configurable time, the monitor is reactivated by a keystroke or moving the mouse
