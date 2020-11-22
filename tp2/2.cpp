// Prompt the user to input ten integer values

#include <iostream>

using namespace std;


int main()
{
	int min, max, mod_index, mod_max;
	int array[10] = {0};
	int mod_array[10] = { 0 };

	cout << "enter 10 values" << endl;
	int i;
	for (i = 0; i < 10; i++)
	{
		cin >> array[i];
		for (int k = 0; k < i; k++)
		{
			if (array[i] == array[k])
			{
				mod_array[k]++;
				break;
			}
		}
	}

	min = array[0];
	max = array[0];
	mod_max = mod_array[0];
	mod_index = 0;

	for (int i = 0; i < 10; i++)
	{
		cout << mod_array[i];
	}

	for (int i = 0; i < 10; i++)
	{
		if (array[i] > max)
			max = array[i];
		if (array[i] < min)
			min = array[i];
		if (mod_array[i] > mod_max)
		{
			mod_index = i;
			mod_max = mod_array[i];
		}

	}


	if (mod_max == 0)
	{
		cout << "all the values are occured just 1 time. There isnt any 'most occured value in this set'" << endl;
		cout << "minimum value : " << min << "maximum value :" << max << endl;
	}
	else
		cout << "minimum value : " << min << "maximum value :" << max << "mod (most occured value)" << array[mod_index] << endl;


}
