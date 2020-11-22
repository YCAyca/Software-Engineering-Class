// Write a C++ function to sort an array of ten integer values in ascending order. 

#include <iostream>

using namespace std;

int * sort_table(int* table, int size)
{
	int * head = table;
	int * next = table + 1;
	int temp;
	
	for(int i=0;i<=size;i++)
	{		
		for(int j=i+1;j<size;j++)
		{
			if(*table > *next)
			{
				temp  = *table;
				*table = *next;
				*next =temp;
			}
			table++;
			next++;
		}
		table = head;
		next = head + 1;
	}
	return table;
}

int main()
{
	int table[10] = { 10, -5, 3, 1, 8, -10, -15, 4, 82, -94 };
	int *sorted = sort_table(table, 10);
	
	for(int i=0; i<10;i++)
	    cout << *sorted++ << " ";
	
}
