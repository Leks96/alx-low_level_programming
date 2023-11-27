#include "main.h"
/**
* create_file - Creates a file with the given content.
* @filename: The name of the file to create.
* @text_content: The content to write to the file.
*
* Return: 1 on success, -1 on failure.
*/
int create_file(const char *filename, char *text_content)
{
	int fd, write_result;
	size_t text_lenght = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[text_lenght])
			text_lenght++;
	}

	/*open file with read or write permission, create if it doesn't exist*/
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	/*write content to the file if text_content is not NULL*/
	if (text_content != NULL)
	{
		write_result = write(fd, text_content, text_lenght);

		if (write_result == -1)
		{
			close(fd);
			return (-1);
		}
	}
	/*close file descriptor*/

	close(fd);

	/*set the file permission to rw-------*/
	if (chmod(filename, S_IRUSR | S_IWUSR) == -1)
		return (-1);

	return (1);
}
