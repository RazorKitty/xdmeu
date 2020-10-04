# xdmenu
xdmenu is a fork of [dmenu](https://tools.suckless.org/dmenu/) in the same vain as [xst](https://github.com/gnotclub/xst)

## What's the point?
The goal is to keep the core functionality the same while a few more options and features for better desktop intergration.

## What's new?
Patches that have been added and extended:
* [border](https://tools.suckless.org/dmenu/patches/border/)
* [xresources](https://tools.suckless.org/dmenu/patches/xresources/)
* [xyw](https://tools.suckless.org/dmenu/patches/xyw/)
* [centered](https://tools.suckless.org/dmenu/patches/centered/)
* [password](https://tools.suckless.org/dmenu/patches/password)

### xyw
* -x and -y can be used to set positional offset of the window, provided values of less that 1 are interpred and a percentage of the draw space
* -co sets the width of the window in characters

### centered
* -cx and -cy set the x and y offsets as relative to the center of thier respective axis, anything but 0 turns this on
* -c will set the flax for but x and y together

### Border
A border width and color can bet set either in `config.h` or via the command line

### Password
* -P can be used to enter password mode, input characters are rendered as a censor character and stdin is ignored
* -Pc can be used to set the censor character

### Xresources
* Normal foreground
* normal background
* selected foreground
* selected background
* prompt foreground
* prompt background
* input foreground
* input background
* prompt text
* font
* border width
* border color
* cols int
* x float
* y float
* center_x int
* center_y int
* center int
* censor

### Extras
Out, Prompt, and input colors can now be supplied at the command line

## Requirements
In order to build xdmenu you need the Xlib header files.

## Installation
Edit `config.mk` to match your local setup (xdmenu is installed into
the /usr/local namespace by default).

Afterwards enter the following command to build and install xdmenu
(if necessary as root):

    make clean install


## Running xdmenu
See the man page for details.
