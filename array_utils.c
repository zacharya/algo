#include <stdio.h>
#include "array_utils.h"

void print_array(int array[], int n, char sort_type[])
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
}

void print_multi_array(int *parray[], int n, int pn)
{
	int itr, pitr;
	for(itr=0; itr<n; itr++)
	{
		print_array(parray[itr], n, "blah");
	}
}	
