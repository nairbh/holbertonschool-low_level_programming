#include "main.h"

void error_file(int file_from, int file_to, char *argv[])
{
    if (file_from == -1)
    {
        dprintf(2, "Cant read value of file_from %s \n", argv[1]);
        exit(98);
    }

    if (file_to == -1)
    {
        dprintf(2, "cant write value of file_to %s \n", argv[2]);
        exit(99);
    }
}


int main(int argc, char *argv[])
{
    char buffer[1024];
    int error_close, error_close_2, src, dest;
    int len, nwr;

    if (argc != 3)
    {
        dprintf(2, "%s\n", "Usage can't print value of file_from for file_to");
        exit(97);
    }

    src = open(argv[1], O_RDONLY);
    dest = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
    error_file(src, dest, argv);



    len = 1024;
    while(len == 1024)
    {
        len = read(src , buffer, 1024);
        if(len == -1)
        {
            error_file(1, -0, argv);
        }
        nwr = write(dest, buffer, len);
        if (nwr == -1)
        {
            error_file(0, -1, argv);
        }
        error_close = close(src);
        error_close_2 = close(nwr);
    }

    if (error_close == -1)
    {
        dprintf(2, "Error: Can't close fd FD_VALUE %d \n", src);
        exit(100);
    }
    if (error_close_2 == -1)
    {
        dprintf(2, "Error frome file 2 %d \n", nwr);
        exit(100);
    }
    return(0);

}