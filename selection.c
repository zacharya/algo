#include "selection.h"

void selection_sort(int array[], int n)
{
	int itr, traverse, temp, position;
	for(itr=0; itr<(n-1); itr++)
	{
		position=itr;
		for(traverse=itr+1; traverse<n; traverse++)
		{
			if(array[traverse]<array[position])
			{
				position=traverse;
			}
		}
		if(position!=itr)
		{
			temp=array[itr];
			array[itr]=array[position];
			array[position]=temp;
		}
	}
}
