#include <iostream>
using namespace std;

int main()
{
    int arr[] = {23, 22, 1, 21, 54, 65, 78, 43, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 1; i < size; i++)
    {
        int curr = arr[i];
        int prev = i - 1;

        while (prev >= 0 && arr[prev] > curr)
        {
            arr[prev + 1] = arr[prev];
            prev--;
        }
        arr[prev + 1] = curr;
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
