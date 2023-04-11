#include "main.h"
/**
 * create_file - Creates a file with the given name and writes the given text
 * content to it.
 *
 * @filename: A pointer to a string with the name of the file to be created.
 * @text_content: A pointer to a string with the content to be written to the
 * file. If NULL, an empty file will be created.
 *
 * Return: 1 on success, -1 on failure
 **/
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t len;

	if (filename == NULL)
	{
		return (-1);
	}


	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (fd == -1)
	{
		close(fd);
		return (-1);
	}

	len = write(fd, text_content, strlen(text_content));

	if (len == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
