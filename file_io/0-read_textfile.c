#include "main.h"
/**
 * read_textfile - reads a text file
 * @filename: pointer to the name of the file to read
 * @letters: number of letters to read and print
 *
 * Return: the actual number of letters read and printed, or 0 upon failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	void *buffer;
	ssize_t rd;

	if (filename == NULL)

		return (0);

	fd = open(filename, O_RDONLY);

		if (fd == -1)
		{
			close(fd);
			return (0);
		}

	buffer = malloc(letters);

	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	 rd = read(fd, buffer, letters);

	if (rd == -1)
	{
		close(fd);
		return (0);
	}

	if (write(1, rd, buffer) == -1)
	{	
		free(buffer);
		return (0);
	}
	free(buffer);
	close(fd);
	return (rd);
}
