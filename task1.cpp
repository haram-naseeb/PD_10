#include <iostream>
using namespace std;
bool consecutive(int array[], int length);
int main()
{
    bool consecute;
    cout << "Enter the length of array: ";
    int length;
    cin >> length;
    int array[length];
    cout << "Enter elements of array: " << endl;
    for (int i = 0; i < length; i++)
    {
        cin >> array[i];
    }
    consecute = consecutive(array, length);
    cout << consecute << endl;
    if (consecute == true)
    {
        cout << "Arranged Array: ";
        for (int z = 0; z < length; z++)
        {
            cout << array[z] << ", ";
        }
    }
}

bool consecutive(int array[], int length)
{
    int temp;
    bool result;

    for (int i = length - 1; i >= 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (array[j] > array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

    for (int k = 1; k < length; k++)
    {
        int x = k - 1;
        int y = array[x] + 1;
        if (array[k] == y)
        {
            result = true;
        }
        else
        {
            result = false;
            break;
        }
    }

    return result;
}
