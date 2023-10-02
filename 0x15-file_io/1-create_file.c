#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * create_file - a function that creates a file and writes to the file
 * @filename: variable pointer of the file
 * @text_content: is a content file
 * Description: Create a function that creates a file.
 * Return: 1 when on  success, and -1 on failure
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
