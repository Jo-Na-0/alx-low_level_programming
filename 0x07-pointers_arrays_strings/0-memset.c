#include "main.h"
#include <string.h>

/**
 * Date: Tue,Sep27.
 *
 * Author: Mutebi Jonathan
 *
 * Description: Function fills memory with a constant byte.
*/

char *_memset(char *s, char b, unsigned int n);
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++
	}

	return (s);
}
