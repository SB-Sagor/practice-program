#include <bits/stdc++.h>
using namespace std;
int linearSearch(int arr[], int size, int target)
{

    int i;
    for (i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int i, a[] = {12, 23, 34, 43, 23, 13, 2, -5};
    int size = sizeof(a) / sizeof(a[0]);
    int item = 2;
    int linear = linearSearch(a, size, item);
    cout << "Index of the number is = " << linear << endl;
}