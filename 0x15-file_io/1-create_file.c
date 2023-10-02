#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* create_file - creates file and writes a file
* @filename: is a pointer variable 
* @text_content: that prints the content of the file
* Rerturn: returns the file if not null
*/
int create_file(const char *filename, char *text_content)
{
	int i = 0, file;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";


	while (text_content[i] != '\0')
	{
		i++;
	}

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file == -1)
		return (-1);

	write(file, text_content, i);

	return (1);
}
