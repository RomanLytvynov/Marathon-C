#include "header.h"

int main(int argc, char const *argv[])
{
	if (argc != 3) 
    {
        mx_printerr("usage: ");
        mx_printerr(argv[0]);
        mx_printerr(" [source_file] [destination_file]\n");
        return -1;
    }

    int fd_out = 0;
	fd_out = open(argv[1], O_RDONLY);
    if (fd_out < 0) {
        mx_printerr("mx_cp: ");
        mx_printerr(argv[1]);
        mx_printerr(": ");
        mx_printerr(strerror(2));
        mx_printerr("\n");
        return -1;
    }

    int fd_inp = 0;
	fd_inp = open(argv[2], O_CREAT | O_EXCL | O_WRONLY, 00200 | 00400);
    char buffer;

    while (read(fd_out, &buffer, 1))
        write(fd_inp, &buffer, 1);

    close(fd_out);
    close(fd_inp);
    exit(0);

	return 0;
}

