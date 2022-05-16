#include <stdlib.h>
#include "main.h"

/**
 *_strdup - a function
 * @src: the chain
 *
 * Return: the chain
 * */

char	*_strdup(char *src)
{
	int i;
	int len;
	char *out;

	i = 0;
	len = _strlen(src);
	out = malloc(sizeof((*src) * (len)));

	while (i <= len)
	{
		out[i] = src[i];
		i++;
	}
	return (out);
}
