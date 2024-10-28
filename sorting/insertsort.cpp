#include <iostream>
using namespace std;

int main()
{
    int arr[] = {23, 22, 1, 21, 54, 65, 78, 43, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 1; i < size; i++)
    {

        for (int j = i; j > 0 && arr[j - 1] > arr[j]; j--)
        {

            swap(arr[j], arr[j - 1]);
        }
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
