#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: the name of the file
 * @text_content: is the string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int myfile;

	if (filename == NULL)
	{
		return (-1);
	}
	myfile = open(filename, O_APPEND | O_WRONLY);
	if (myfile == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		dprintf(myfile, "%s", text_content);
	}
	close(myfile);
	return (1);
}
