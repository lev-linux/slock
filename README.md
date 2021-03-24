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
* [DWM logo](https://github.com/arieboven/slock/blob/master/slock-dwmlogo-20210324.diff): Instead of the color change of the whole screen, there will be a dwm logo of which color will change
* PyWal support: change the path for pywal cache (probably `~/.cache/wal/`) in `config.def.h` and make a template like [this file](https://github.com/salahdin-ahmed/dotfiles/blob/master/.config/wal/templates/colors-wal-slock.h) in pywal config direcotry (probably `~/.config/wal/template/`). It will require you to (re)compile slock everytime you change your theme, if you would like it to work on the fly try using [Xresources patch](https://tools.suckless.org/slock/patches/xresources/).
