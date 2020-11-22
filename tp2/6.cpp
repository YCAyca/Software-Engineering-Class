// Write a program to accept five integer values from keyword.

#include <iostream>

using namespace std;

int main()
{
    int array[5];
    int * ptr = array;
    
    for (int i = 0; i < 5; i++)
    {
        cout << "enter value" << i << endl;
        cin >> *ptr++;
    }
    
    for (int i = 0; i < 5; i++)
    {
        cout << array[i] << " ";
    }
    
   
    return 0;
}
