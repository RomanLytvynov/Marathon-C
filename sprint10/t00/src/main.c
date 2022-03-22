#include "header.h"

static int file_open(char const *a, int b) {
    b = open(a, O_RDONLY);
    if (b < 0) {
        write(2, "error\n", 6);
        return -1;
    }
    return b;
}

int main(int argc, char const *argv[])
{
	if (argc!=2) 
	{
		write(2, "usage: ./read_file [file_path]\n", 31);
		return -1;
	}
	int fop = 0;
	fop = file_open(argv[1], fop);
	ssize_t ref;
    char ch;
	while ((ref = read(fop, &ch, 1)) > 0) {
        write(1, &ch, 1);
        if (ref < 0) {
            write(2, "error\n", 6);
            return -1;
        }
    }
    close(fop);

	return 0;
}

