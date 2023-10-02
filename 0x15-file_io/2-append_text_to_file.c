#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * append_text_to_file - this function appends the file
 * 
 * @filename: variable pointer of the file
 * @text_content: content file
 * Return: 1 when it is success, and -1 when it failing
 */

int append_text_to_file(const char *filename, char *text_content)
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
    file = open(filename, o_WRONLY | o_APPEND);

    if (file == -1)
        return (-1);
    write(file,text_content,i);
    return (1);
}
