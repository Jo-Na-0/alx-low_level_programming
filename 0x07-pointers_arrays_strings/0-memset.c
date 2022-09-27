#include "main.h"

/**
 * Date: Tue,Sep27,2022
 *
 * Author: Mutebi Jonathan
 *
 * Description: Function fills memory with a constant byte.
*/

char *_memset(char *s, char b, unsigned int n);
{
	unsigned int i = 0;

	while (i > n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
