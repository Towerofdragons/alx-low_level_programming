#include "main.h"

/**
 * create_file - creates a file
 * @filename: new file name
 * @text_context:string to be written
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_context)
{
	int fd, strlength;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fd == -1)
		return (-1);

	if (text_context)
	{
		strlength = 0;
		while (text_context[strlength])
		{
			strlength++;
		}

		write(fd, text_context, strlength);
	}
	close(fd);
	return (1);
}
