#include "main.h"
/**
* main - Copies the content of a file to another file.
* @argc: Number of command-line arguments.
* @argv: Array of command-line argument strings.
*
* Return: 0 on success, otherwise exit with the appropriate code.
*/
int main(int argc, char *argv[])
{
	int fd_from, fd_to, read_result, write_result;
	char buffer[BUFFER_SIZE];
	mode_t permissions = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (argc != 3)
	{
		dprintf(2, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}

	fd_from = open(argv[1], O_RDONLY);

	if (fd_from == -1)
	{
		dprintf(2, "Error: can't read from file %s\n", argv[1]);
		exit(98);
	}

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, permissions);

	if (fd_to == -1)
	{
		dprintf(2,"Error: can't write to file %s\n", argv[2]);
		close(fd_from);
		exit(99);
	}
	while ((read_result = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		write_result = write(fd_to, buffer, read_result);
		
		if (write_result == -1)
		{
			dprintf(2, "Error: can't write to %s\n", argv[2]);
			close(fd_from);
			close(fd_to);
			exit(99);
		}
	}

	if (read_result == -1)
	{
		dprintf(2, "Error: can't read from file %s\n", argv[1]);
		close(fd_from);
		close(fd_to);
		exit(98);
	}

	if (close(fd_from) == -1 || close(fd_to) == -1)
	{
		dprintf(2, "Error: can't close fd\n");
		exit(100);
	}

	return (0);
}
