#include <stdio.h>

void mx_sort_arr_int(int*arr, int size)
{
    int key;
    int i;
    for(int j=1;j<size;j++){
        key = arr[j];
        i=j-1;
        while(i>=0&&arr[i]>key){
            arr[i+1]=arr[i];
            i-=1;
        }
        arr[i+1]=key;
    }
}

