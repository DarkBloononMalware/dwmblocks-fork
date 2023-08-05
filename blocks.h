//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/ 
	/* {""  , "~/.Scripts/vol.sh",				1,	0}, */
	/* {"", "uname -r",                          		2,     20}, */
	{" ", "~/.functions/disk-bar",                         2,      0},
	{" ", "~/.functions/cpu-bar",                          2,      0},
	{" ", "~/.functions/ram-bar",				2,	0},	
	{" ", "date '+%d %b %Y, %a %H:%M'",			2,	0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
