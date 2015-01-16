#include "bubble.h"

void bubble_sort(int array[], int n)
{
	int itr, traverse, temp;
	for(itr=0; itr<n; itr++)
        {
                for(traverse=0; traverse<(n-itr); traverse++)
                {
                        if(array[traverse]>array[traverse+1])
                        {
                                temp=array[traverse+1];
                                array[traverse+1]=array[traverse];
                                array[traverse]=temp;
                        }
                }
        }
}

