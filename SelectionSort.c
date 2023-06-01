#include<stdio.h>

void selectionSort(int arr[], int size)
{
	int i, j, small, temp;

	for (i = 0; i < size - 1; i++)
	{
		small = i;
		for (j = i + 1; j < size; j++)
		{
			if (arr[j] < arr[small])
			{
				small = j;
			}
		}

		if (small != i)
		{
			temp = arr[i];
			arr[i] = arr[small];
			arr[small] = temp;
		}
	}
}

int main()
{
	int arr[] = {64, 25, 12, 22, 11, 34, 100, 99, 44};
	int size = sizeof(arr) / sizeof(arr[0]);

	printf("Array before sorting: ");
	for (int i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}

	selectionSort(arr, size);

	printf("\nArray after sorting: ");
	for (int i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}s