#include <iostream>

using namespace std;

#define pi 3.14

// Problem 1

void Area(float circumference)
{
	float diameter = circumference / (2 * pi);
	cout << "Area:" << (diameter * diameter) * pi << endl;
}


// Problem 2

void min_max_table(float* table, int table_size)
{

	float min = table[0];
	float max = table[0];

	for (int i = 1; i < table_size; i++)
	{
		if (table[i] > max)
			max = table[i];
		if (table[i] < min)
			min = table[i];
	}
	cout << " minimum of the table :" << min << " maximum of the table :" << max << endl;
}

// Problem 3

void Fibonacci_Series(int rank)
{
	int tmp1 = 0;
	int tmp2 = 1;
	int sum = 0;
	cout << "Fibonacci Serie with rank :" << rank << endl;
	cout << tmp1 << " " << tmp2 << " ";
	for (int i = 0; i < rank; i++)
	{
		sum = tmp1 + tmp2;
		tmp1 = tmp2;
		tmp2 = sum;
		cout << sum << " ";
	}
	cout << endl;
}

// Problem 4

void Multiplication_Table(uint8_t column_size, uint8_t row_size)
{
	for (int i = 1; i <= row_size; i++)
	{
		for (int k = 1; k <= column_size; k++)
			cout << i * k << " ";
		cout << endl;
	}
}


// Problem 5


void Truth_Table(bool input1, bool input2, bool input3)
{
	cout << " input1 and input2 and input3 : " << (input1 && input2 && input3) << endl;

	cout << " input1 or input2 or input3 : " << (input1 || input2 || input3) << endl;
}


int main()
{
	float circumference = 0.0;
	int size = 0;
	int rank = 0;
	float table[50];
	bool in1, in2, in3;
	int column_size, row_size;

	cout << "enter the circumference of the circle to obtain area" << endl;
	while (true)
	{
		cin >> circumference;
		if (circumference < 0)
		{
			cout << "circumference cant be a negative value. please enter again" << endl;
			cin.clear();
		}
		else
		{
			cin.clear();
			break;
		}

			
	}
	Area(circumference);

	cout << "enter the size of the table (50 maximum!)" << endl;
	
	while (true)
	{
		cin >> size;
		if (size < 0 || size > 50)
		{
			cout << "inappropiate size. please enter the table size again" << endl;
			cin.clear();
		}
		else
		{
			cin.clear();
			break;
		}
	}
	
	cout << "enter the table variables" << endl;
	
	for (int i = 0; i < size; i++)
		cin >> table[i];
	min_max_table(table, size);


	cout << "enter the column and row size of the multiplication table" << endl;
	cin >> column_size >> row_size;
	Multiplication_Table(column_size, row_size);

	cout << "enter the rank for Fibonacci Series " << endl;
	cin >> rank;
	Fibonacci_Series(rank);

	cout << "enter the boolean values to obtain Truth Table " << endl;
	cin >> in1 >> in2 >> in3;
	Truth_Table(in1, in2, in3);
}
