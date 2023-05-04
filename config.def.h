/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "wheel";

# define pywal "/home/salastro/.cache/wal/colors-wal-slock.h"

#if __has_include(pywal)
#include pywal
#else
static const char *colorname[NUMCOLS] = {
	[BACKGROUND] =   "#32302f",     /* after initialization */
	[INIT] =         "#665c54",     /* after initialization */
	[INPUT] =        "#83a598",     /* during input */
	[FAILED] =       "#fb4934",     /* wrong password */
};
#endif

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 0;

/* time in seconds before the monitor shuts down */
static const int monitortime = 5;

/* time in seconds to cancel lock with mouse movement */
static const int timetocancel = 4;

static const secretpass scom[] = {
/*	 Password				command */
	{ "s",           "doas poweroff" },
	{ "r",           "doas reboot" },
	{ "l",           "doas zzz" },
	{ "h",           "doas ZZZ" },
	{ "q",           "pkill Xorg" },
};

/* default message */
static const char * message = "s: shutdown\nr: reboot\nl: sleep\nh: hibernate\nq: quit\n";

/* text color */
static const char * text_color = "#ffffff";

/* text size (must be a valid size) */
static const char * font_name = "6x10";

static const int logosize = 75;
static const int logow = 12; /* Grid width and height for right center alignment*/
static const int logoh = 6;

static XRectangle rectangles[9] = {
    {0, 3, 1, 3},
    {1, 3, 2, 1},
    {0, 5, 8, 1},
    {3, 0, 1, 5},
    {5, 3, 1, 2},
    {7, 3, 1, 2},
    {8, 3, 4, 1},
    {9, 4, 1, 2},
    {11,4, 1, 2},
};

/*Enable blur*/
#define BLUR
/*Set blur radius*/
static const int blurRadius=5;
/*Enable Pixelation*/
//#define PIXELATION
/*Set pixelation radius*/
static const int pixelSize=0;
