#include "main.h"


ssize_t read_textfile(const char *filename, size_t letters)
{
    int fd;
    void *buffer;
    size_t rd;

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
        free(buffer);
        close(fd);
        return(0);
    }

    rd = read(fd, buffer, letters);
    if ((ssize_t)rd == -1)
    {
        return (0);
    }

    if (write(1, buffer, rd) == -1)
    {
        free(buffer);
        close(rd);
        return(0);
    }

    free(buffer);
    close(rd);
    return (rd);
}