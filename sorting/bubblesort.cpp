#include <iostream>
using namespace std;
int main()
{
    int arr[] = {23, 22, 1, 21, 54, 65, 78, 43, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1 - i; j++)
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}