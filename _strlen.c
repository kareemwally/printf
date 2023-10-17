#include "main.h"

/**
 *_strlen-function
 *Description:count length of a string
 *@str:the pointer to string to be counted
 *Return:(lenght)
 */
size_t  _strlen(const char *str)
{
	size_t  len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}
