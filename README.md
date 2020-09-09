# xdmenu
xdmenu is a fork of [dmenu](https://tools.suckless.org/dmenu/) in the same vain as [xst](https://github.com/gnotclub/xst)

## What's the point?
The goal is to keep the core functionality the same while a few more options and features for better desktop intergration.

## What's new?
Patches that have been added and extended:
* [border](https://tools.suckless.org/dmenu/patches/border/)
* [xresources](https://tools.suckless.org/dmenu/patches/xresources/) 

### Border
A border width and color can bet set either in `config.h` or via the command line

### Xresources
* Normal foreground
* normal background
* selected foreground
* selected background
* prompt foreground
* prompt background
* prompt text
* font
* border width
* border color

### Extras
Out and Prompt colors can now be supplied at the command line

## Requirements
In order to build xdmenu you need the Xlib header files.

## Installation
Edit `config.mk` to match your local setup (xdmenu is installed into
the /usr/local namespace by default).

Afterwards enter the following command to build and install xdmenu
(if necessary as root):

    make clean install


## Running dmenu
See the man page for details.
