#include "main.h"
#include <stdio.h>
#include <sys/stat.h>

/**
 * main - entry point
 * @argc: numbers of arguments
 * @argv: arguments
 * Return: int
*/
void argc_error(int argc)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}
int from_source(const char *filename)
{
		from_fd = open(argv[1], O_RDONLY);
	if (!argv[1] || from_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	return (from_fd);
}
int main(int argc, char **argv)
{
	mode_t oldmask = umask(0);
	int from_fd, to_fd, readed, writed;
	char size[1024];
	argc_error(argc);
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
