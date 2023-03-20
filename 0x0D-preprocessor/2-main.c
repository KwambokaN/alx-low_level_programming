#include <stdio.h>

/** 
 * prints the name of the file it was compiled from
 * followed by a new line
 * return 0 (success)
 */

int ain(void)
{
	printf("%s\n", __FILE__);
	return (0);
}

