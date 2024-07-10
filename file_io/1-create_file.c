#include "main.h"
#include <sys/stat.h>
#include <string.h>

/**
 * create_file - creates a file.
 *
 * @filename: the name of the file to create
 * @text_content: content to write into newly created file, null terminated
 *
 * Return: 1 on success, or -1 on failure
 * (file can not be created, file can not be written, write “fails”, etc…)
 */
int create_file(const char *filename, char *text_content)
{
	int fileDesc = open(filename, O_RDWR | O_CREAT, S_IRUSR | S_IWUSR);

	if (filename == NULL || fileDesc == -1)
		return (-1);

	if (text_content != NULL &&
		write(fileDesc, text_content, strlen(text_content)) == -1)
	{
		close(fileDesc);
		return (-1);
	}

	close(fileDesc);

	return (1);
}
