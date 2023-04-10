#include "main.h"

/*read_textfile - reads a text file printing to stdout
 * @filename: file name
 * @letters: number of letters to be read and printed
 *
 * Return: number of letters printable
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytes_read, bytes_written;
	char *text;
	
	if (filename == NULL)
		return (0);


	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);
	
	text = malloc(sizeof(char) * letters);

	if (text == NULL)
		return (0);

	bytes_read = read(fd, text, letters);

	if (bytes_read == -1)
		return (0);

	bytes_written = write(STDOUT_FILENO, text, letters);

	if (bytes_written == -1)
		return (0);

	close (fd);
	return ((ssize_t) bytes_written);
}
