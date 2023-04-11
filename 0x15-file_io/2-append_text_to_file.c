#include "main.h"

/**
 * append_text_to_file - appends text to file
 * @filename: file to be edited
 * @text_content: source for append
 *
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, index;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		index = 0;
		while (text_content[index])
			index++;

		if (write(fd, text_content, index) == -1)
			return (-1);
	}
	close(fd);

	return (1);

}
