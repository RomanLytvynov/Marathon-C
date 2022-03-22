int mx_strlen(const char*s);

int mx_insertion_sort(char**arr, int size)
{
	char *key = "";
    int i = 0, counter = 0;
    for(int j=1;j<size;j++)
    {
        key = arr[j];
        i=j-1;
        while(i>=0&&mx_strlen(arr[i])>mx_strlen(key))
        {
            arr[i+1]=arr[i];
            i-=1;
            counter++;
        }
        arr[i+1]=key;
    }
    return counter;
}

