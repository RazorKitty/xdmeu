/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"monospace:size=10"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	                  /* fg        bg       */
	[SchemeNorm]    = { "#bbbbbb", "#222222" },
	[SchemeSel]     = { "#eeeeee", "#005577" },
	[SchemePrompt]  = { "#eeeeee", "#005577" },
    [SchemeInput]   = { "#bbbbbb", "#222222" },
    [SchemeBorder]  = { "#005577", "#eeeeee" },
	[SchemeOut]     = { "#000000", "#00ffff" }
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;
/* -bw option; Size of the window border */
static unsigned int border_width = 0;
/* -c consider co-ordinates give to b relative to the center of the menu */
static unsigned int center_x = 0;
static unsigned int center_y = 0;
/* the x co-ordinate */
static double x_offset = 0;
/* the y co-ordinate */
static double y_offset = 0;
/* if nonzero i will be used as the number of characters wide the menu should be */
static unsigned int cols = 0;
/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
