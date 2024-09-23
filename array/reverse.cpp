#include <bits/stdc++.h>
using namespace std;
void reverse(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
int main()
{
    int i, a[] = {12, 34, 5, 42, 6, 5};
    int size = 6;
    reverse(a, size);
    cout << "Original = 12 34 5 42 6 5" << endl;
    cout << "Reverse = ";

    for (i = 0; i < size; i++)
    {

        cout << a[i] << " ";
    }
    cout << endl;
}