#include "main.h"
#include <stdio.h>
#include <sys/stat.h>

/**
 * main - entry point
 * @argc: numbers of arguments
 * @argv: arguments
 * Return: int
*/
#include "main.h"
#include <stdio.h>
#include <sys/stat.h>

void check_arguments(int argc) {
    if (argc != 3) {
        dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
        exit(97);
    }
}

int open_source_file(const char *filename) {
    int fd = open(filename, O_RDONLY);
    if (!filename || fd == -1) {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
        exit(98);
    }
    return fd;
}

int open_destination_file(const char *filename) {
    int fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0664);
    if (fd == -1) {
        dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
        exit(99);
    }
    return fd;
}

void copy_content(int from_fd, int to_fd) {
    char buffer[1024];
    int read_bytes, written_bytes;

    while ((read_bytes = read(from_fd, buffer, 1024)) > 0) {
        written_bytes = write(to_fd, buffer, read_bytes);
        if (written_bytes != read_bytes || written_bytes == -1) {
            dprintf(STDERR_FILENO, "Error: Can't write to fd\n");
            close(from_fd);
            close(to_fd);
            exit(99);
        }
    }
    if (read_bytes == -1) {
        dprintf(STDERR_FILENO, "Error: Can't read from fd\n");
        close(from_fd);
        close(to_fd);
        exit(98);
    }
}

void close_file(int fd) {
    if (close(fd) == -1) {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
        exit(100);
    }
}

int main(int argc, char **argv) {
    mode_t oldmask = umask(0);
    int from_fd, to_fd;

    check_arguments(argc);
    from_fd = open_source_file(argv[1]);
    to_fd = open_destination_file(argv[2]);
    umask(oldmask);

    copy_content(from_fd, to_fd);

    close_file(from_fd);
    close_file(to_fd);

    return 0;
}
