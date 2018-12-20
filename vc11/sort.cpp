#include "stdafx.h"
#include "sort.h"


int bubbleSort(int a[], int length)
{
	for (int i = 0; i < length - 1; i++)
	{
		for (int j = length - 1; j > i; j--)
		{
			if (a[j] < a[j - 1])
			{
				int temp = a[j];
				a[j] = a[j - 1];
				a[j - 1] = temp;
			}

		}

	}
	return 0;



}
