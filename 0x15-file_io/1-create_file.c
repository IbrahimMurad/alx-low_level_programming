#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * create_file - creates a file
 * @filename: the name of the file to be created
 * @text_content: a pointer to a string to be printed to the new file
 *
 * Return: 1 on success or -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int newFile;

	if (filename == NULL)
	{
		return (-1);
	}
	newFile = open(filename, O_CREAT | O_TRUNC | O_WRONLY, S_IRUSR | S_IWUSR);
	if (newFile == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		dprintf(newFile, "%s", text_content);
	}
	close(newFile);
	return (1);
}
