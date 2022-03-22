void mx_sort(int arr[], int size)
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

int find_first(int num1, int num2, 
			const int *arr, int size)
{
	for (int i = 0; i < size; ++i)
	{
		if (arr[i]==num1) return num1;
		if(arr[i]==num2) return num2;
	}
	return -1;
}

int mx_popular_int(const int *arr, int size)
{
	//int num = 0;
	int arr1[size];
	int counter = 1;
	arr1[0] = arr[0];
	for (int i = 1; i < size; ++i)
	{
		arr1[i] = arr[i];
	}
	mx_sort(arr1, size);
	for (int i = 1; i < size; ++i)
	{
		if(arr1[i] != arr1[i-1])
			counter++;
	}
	int array[counter][2];

	array[0][0] = arr1[0];
	int key = 1;

	for (int i = 1, j = 0; i < size; ++i)
	{
		if(arr1[i]==arr1[i-1])
		{
		    if(i==size - 1)
		    {
		        key++;
		        array[j][1] = key;
		    }
		    else
			key++;
		}
		else
		{
			array[j][1] = key;
			j++;
			array[j][0] = arr1[i]; 
			key = 1;
		}
	}

	int max_val = array[0][0];
	int max = array[0][1];

	for (int i = 1; i < counter; ++i)
	{
		if(array[i][1] > max) 
		{
			max = array[i][1];
			max_val = array[i][0];
		}
		else if(array[i][1] == max)
		{
			max_val = find_first(max_val, 
				array[i][0], arr, size);
		}
		else continue;
	}
	return max_val;

}

