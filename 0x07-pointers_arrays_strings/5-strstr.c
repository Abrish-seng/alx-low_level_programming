#include "main.h"
/**
 * _strstr - prints the consecutive caracters of s1 that are in s2.
 * @haystack: source string
 * @needle: searching string
 *
 * Return: new string.
 */
char *_strstr(char *haystack, char *needle)
{
	int index;
	if(*needle==0)
		return(haystack);
	while (*haystack)
	{
		index =0;
		if (haystack[index]==needle[index])
		{
			do{
				if(needle[index +1]== '\0')
					return (haystack);
				index++;
		          }while(haystack[index]==needle[index])
		}
		haystaack++;
	}
	return (0);
}
