#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * read_textfile - Reads a file and prints it to the POSIX standard output
 *
 * @filename: the name of the file to read
 * @letters: the number of letters to read & print
 *
 * Return: the actual number of letters it could read & print successfully,
 * or 0 if: file cannot be opened or read,
 * filename is NULL,
 * or write doesn't work write (misspelling intended)
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int charsRead, charsPrinted = 0, fileDesc;
	char *contents;

	if (filename == NULL)
		return (0);

	fileDesc = open(filename, O_RDONLY);

	if (fileDesc == -1)
		return (0);

	charsRead = read(fileDesc, contents, letters);

	if (charsRead <= 0)
		return (0);

	charsPrinted = dprintf(stdout, "%s", contents);

	return (charsPrinted);
}
