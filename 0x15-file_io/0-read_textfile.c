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
	size_t i;
	size_t bytes_read;
	char *text;
	
	fd = open(filename, O_RDONLY);

	if (fd == -1 || filename == NULL)
		return (0);
	
	text = malloc(sizeof(char) * letters);

	if (text == NULL)
		return (0);

	bytes_read = read(fd, text, letters);
	i = 0;


	while (i < letters)
	{
		_putchar(text[i]);
		i++;
	}


	close (fd);
	return ((ssize_t) bytes_read);
}
