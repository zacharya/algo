#include <stdio.h>
#include "bubble.h"
#include "selection.h"
#include "insertion.h"
#include "array_utils.h"

int main()
{
	int input[100], bubble[100], selection[100], insertion[100], n, itr;

	printf("Enter number of elements:\n");
	scanf("%d", &n);
	
	printf("Enter %d integers:\n", n);
	for(itr=0; itr<n; itr++)
	{
		scanf("%d", &input[itr]);
	}
	
	array_copy(selection, input, n);
	selection_sort(selection, n);	
	print_array(selection, n, "selection");

	array_copy(bubble, input, n);
	bubble_sort(bubble, n);
	print_array(bubble, n, "bubble");

	array_copy(insertion, input, n);
	insertion_sort(insertion, n);
	print_array(insertion, n, "insertion");

	int *parray[3]={selection, bubble, insertion};

	print_multi_array(*parray, n, 3);
}

/*void print_array(int array[], int n, char sort_type[])
{
	int itr;
	printf("Array sorted using %s:\n", sort_type);
        for(itr=0;itr<n;itr++)
        {
                printf("%d\n", array[itr]);
        }
}

void array_copy(int array[], int input[], int n)
{
	int itr;
	for(itr=0; itr<n; itr++)
	{
		array[itr]=input[itr];
	}
}*/
