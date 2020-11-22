// Calculator

#include <iostream>

using namespace std;

float Add(float x, float y)
{
	return x + y;
}

float Subtract(float x, float y)
{
	return x - y;
}

float Multiply(float x, float y)
{
	return x * y;
}

float Divide(float x, float y)
{
	return x / y;
}

float Modulus(int x, int y)
{
	return x % y;
}

void Menu()
{
	cout << "MENU" << endl;
	cout << "1. Add" << endl;
	cout << "2. Subtract" << endl;
	cout << "3. Multiply" << endl;
	cout << "4. Divide" << endl;
	cout << "5. Modulus" << endl;
}

int main()
{
	int operation = 0;
	float number1 = 0.0, number2 = 0.0;
	char press_key;

	Menu();

	while (true)
	{
		cout << "Select the operation you want to do" << endl;
		cin >> operation;
		cin.clear();
		if (operation > 5 || operation < 1)
		{
			cout << "No operation available. Please select a number beetween 1-5";
			continue;
		} 
		cout << "Select 2 numbers to operate" << endl;
		cin >> number1 >> number2;
		cin.clear();

		switch (operation)
		{
			case 1:
				cout << Add(number1, number2) << endl;
				break;
			case 2:
				cout << Subtract(number1, number2) << endl;
				break;
			case 3:
				cout << Multiply(number1, number2) << endl;
				break;
			case 4:
				cout << Divide(number1, number2) << endl;
				break;
			case 5:
				cout << Modulus(number1, number2) << endl;
				break;
		}
		cout << "Do you want to do another operation? If yes, press y" << endl;
		cin >> press_key;
		cin.clear();
		if (press_key == 'y')
			;
		else
			break;

	}

}

