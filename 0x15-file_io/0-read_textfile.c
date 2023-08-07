#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: the path of the file to read from
 * @letters: the number of letters it should read and print
 *
 * Return: the actuale number of letters it could read and print
 * Or 0 if the file could not be opened
 * or read or filename is NULL
 * or write fails or does not write the expected amount of bytes
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int inFile;
	ssize_t R;
	size_t count = 0;
	char buf[1];

	if (filename == NULL || letters < 1)
	{
		return (0);
	}
	inFile = open(filename, O_RDONLY);
	if (inFile == -1)
	{
		return (0);
	}
	R = read(inFile, buf, 1);
	while (R != 0)
	{
		count += write(STDOUT_FILENO, buf, 1);
		R = read(inFile, buf, 1);
		if (count == letters)
		{
			break;
		}
	}
	close(inFile);
	return (count);
}
