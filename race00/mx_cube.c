#include <unistd.h>

void mx_printchar(char c);

void print_hor_line(int length){
    mx_printchar('+');
    for(int i = 0; i < length * 2; i++){
        mx_printchar('-');
    }
    mx_printchar('+');
}

void print_spaces(int am){
    if(am > 0){
        for(int i = 0; i < am; i++)
            mx_printchar(' ');
    }
}

int print_diag(int n, int spaces){
    int space_side = 0;
    for(int i = 0; i < n / 2; i++){
        spaces--;
        print_spaces(spaces);
        mx_printchar('/');
        print_spaces(2 * n);
        mx_printchar('/');
        print_spaces(space_side);
        space_side++;
        mx_printchar('|');
        write(1, "\n", 1);
    }
    return space_side;
}

void print_vert(int n, int spaces){
    if(n % 2 != 0){
        for(int i = 0; i < n / 2; i++){
            mx_printchar('|');
            print_spaces(2 * n);
            mx_printchar('|');
            print_spaces(spaces);
            mx_printchar('|');
            write(1, "\n", 1);
        }
    }
    else{
        for(int i = 0; i < n / 2 - 1; i++){
            mx_printchar('|');
            print_spaces(2 * n);
            mx_printchar('|');
            print_spaces(spaces);
            mx_printchar('|');
            write(1, "\n", 1);
        }
    }
        mx_printchar('|');
        print_spaces(2 * n);
        mx_printchar('|');
        print_spaces(spaces);
        mx_printchar('+');
        write(1, "\n", 1);
    for(int i = 0; i < n / 2; i++){
        spaces--;
        mx_printchar('|');
        print_spaces(2 * n);
        mx_printchar('|');
        print_spaces(spaces);
        mx_printchar('/');
        write(1, "\n", 1);
    }
}

void mx_cube(int n){
    int space_am = n / 2 + 1;
    if(n > 1){
       print_spaces(space_am);
       print_hor_line(n);
       write(1, "\n", 1);
       space_am = print_diag(n, space_am);
       print_hor_line(n);
       print_spaces(space_am);
       mx_printchar('|');
       write(1, "\n", 1);
       print_vert(n, space_am);
       print_hor_line(n);
       write(1, "\n", 1);
    }
}

