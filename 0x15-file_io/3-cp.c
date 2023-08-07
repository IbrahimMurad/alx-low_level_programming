#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>


/**
 * opentoread - opens a file to read from
 * @file: the name of the file
 *
 * Return: an fd for the file
 * exits with 98 on error
 */

int opentoread(char *file)
{
	int fd;

	fd = open(file, O_RDONLY);
	if (fd == -1)
	{
		printf("Error: Can't read from file %s", file);
		exit(98);
	}
	return (fd);
}

/**
 * opentowrite - opens a file to write to
 * @file: the name of the file
 *
 * Return: an fd for the file
 * exits with 99 on error
 */

int opentowrite(char *file)
{
	int fd;
	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	fd = open(file, O_CREAT | O_TRUNC | O_RDWR, mode);
	if (fd == -1)
	{
		printf("Error: Can't read from file %s", file);
		exit(99);
	}
	return (fd);
}

/**
 * cpyfile - copies the content from fromfile to tofile
 * @fromfile: fd of the file from which we copy
 * @tofile: fd of the file to which we copy
 *
 * Return: 1 on success or -1 on fail
 */

int cpyfile(int *fromfile, int *tofile)
{
	int R = 1;
	char buf[1024];

	while (R != 0)
	{
		R = read(*fromfile, buf, 1024);
		if (R != 0)
		{
			dprintf(*tofile, "%s", buf);
		}
	}
	return (1);
}



/**
 * main - Entry point
 * @ac: the number of passed arguments
 * @av: an array of strings that holds the passed arguments
 *
 * Return: 0 on success
 * 97 if wrong number of arguments
 * 98 if the file to copy from does not exist or can not be read
 * 99 if the file to write to can not be written
 * 100 if can not close the file descriptor
 */

int main(int ac, char **av)
{
	int inFile, outFile, closed;

	if (ac != 3)
	{
		printf("Usage: cp file_from file_to\n");
		exit(97);
	}
	inFile = opentoread(av[1]);
	outFile = opentowrite(av[2]);
	cpyfile(&inFile, &outFile);
	closed = close(inFile);
	if (closed == -1)
	{
		printf("Error: Can't close fd %d", inFile);
		exit(100);
	}
	closed = close(outFile);
	if (closed == -1)
	{
		printf("Error: Can't close fd %d", outFile);
	}
	return (0);
}
