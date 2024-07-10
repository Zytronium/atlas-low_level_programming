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
	int charsRead, printedChars = 0, fileDesc;
	char *contents;

	contents = malloc(sizeof(char) * letters + 1);

	if (filename == NULL || contents == NULL)
		return (0);

	fileDesc = open(filename, O_RDONLY);

	if (fileDesc == -1)
	{
		close(fileDesc);
		return (0);
	}

	charsRead = read(fileDesc, contents, letters);

	if (charsRead <= 0)
	{
		close(fileDesc);
		return (0);
	}

	contents[charsRead + 1] = '\0';

	printedChars = write(STDOUT_FILENO, contents, charsRead);

	close(fileDesc);

	return (printedChars);
}
