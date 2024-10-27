#include <iostream>
using namespace std;
int main()
{
    int arr[] = {23, 22, 1, 21, 54, 65, 78, 43, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        swap(arr[i], arr[min]);
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}