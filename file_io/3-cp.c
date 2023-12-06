#include "main.h"

/**
 * argc_error - checks if the number of arguments is correct
 * @argc: number of arguments
 */
void argc_error(int argc)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}

/**
 * from_source - opens the source file
 * @filename: name of the file to open
 * Return: file descriptor of the opened file
 */
int from_source(const char *filename)
{
	int from_fd = open(filename, O_RDONLY);

	if (!filename || from_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	return (from_fd);
}

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success, exit code on failure
 */
int main(int argc, char **argv)
{
	mode_t oldmask = umask(0);
	int from_fd, to_fd, readed, writed;
	char size[1024];

	argc_error(argc);
	from_fd = from_source(argv[1]);
	to_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	umask(oldmask);

	while ((readed = read(from_fd, size, 1024)) > 0)
	{
		writed = write(to_fd, size, readed);
		if (writed != readed || writed == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(from_fd);
			close(to_fd);
			exit(99);
		}
	}
	if (readed == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		close(from_fd);
		close(to_fd);
		exit(98);
	}
	if (close(from_fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from_fd);
		exit(100);
	}
	if (close(to_fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", to_fd);
		exit(100);
	}
	return (0);
}
