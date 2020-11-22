// Pascal Triangle

#include <iostream>

using namespace std;

void Pascal_Triangle(int size)
{
    int arr[size][size];

    for (int line = 0; line < size; line++)
    {
        for (int i = 0; i <= line; i++)
        {
            if (line == i || i == 0)
                arr[line][i] = 1;
            else
                arr[line][i] = arr[line - 1][i - 1] +
                arr[line - 1][i];
            cout << arr[line][i] << " ";
        }
        cout << "\n";
    }
}


int main()
{
    int size;
    cout << "enter pascal triangle size";
    cin >> size;
    Pascal_Triangle(size);
    return 0;
}
