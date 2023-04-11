#include "main.h"

int main(int argc,char ** argv)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO,"Usage: cp file_from file_to\n");
		exit(97);
	}
	
	copy(argv[1], argv[2]);

	return (0);

}

void copy(char *file_from, char *file_to)
{
	int from_fd, to_fd, read_stat, write_stat;
	char buffer[BUFFER_SIZE];

	from_fd = open(file_from, O_RDONLY);

	if (from_fd == -1)
	{
		dprintf(STDERR_FILENO,"Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	to_fd = open(file_to, O_CREAT | O_TRUNC | O_WRONLY, 0664);

	if (to_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}


	while ((read_stat = read(from_fd, buffer, BUFFER_SIZE)) != 0)
	{
		if (read_stat == -1)
		{
			dprintf(STDERR_FILENO,"Error: Can't read from file %s\n", file_from);
			exit(98);
		}
		write_stat = write(to_fd, buffer, read_stat);
		if (write_stat == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			exit (99);
		}
	}

	if (close(to_fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", to_fd);
		exit(100);
	}

	if (close(from_fd) == -1)
        {
                dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from_fd);
		exit(100);
        }
}
