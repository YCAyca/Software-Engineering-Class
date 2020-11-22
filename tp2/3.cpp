// Sort 10 integer values

#include <iostream>

using namespace std;

void sort_table(int* table)
{
	 int max = table[0];
	 int min = table[0];
	 int n = 10, index = 0;
	 int sorted_table[10] = { 0 };
	 int k = -1;

	 while (n--)
	 {
		 k++;
		 for (int i = 0; i < 10; i++)
		 {
			 if (table[i] > max)
			 {
				 max = table[i];
				 index = i;
			 }
			 if (k == 0) // important just for first enter
			 {
				if (table[i] < min)
					min = table[i];
			 }
		 }
		 table[index] = min;
		 sorted_table[k] = max;
		 max = table[0];
		 index = 0;
	 }

	 for (int i = 0; i < 10; i++)
		 cout << sorted_table[i] << " ";
}

int main()
{
	int table[10] = { 10, -5, 3, 1, 8, -10, -15, 4, 82, -94 };
	sort_table(table);
}
