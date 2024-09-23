#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, arr[] = {10, 20, -5, 32, 120, -3};
    int size = sizeof(arr) / sizeof(arr[0]);
    int maxindex = -1;
    int minindex = -1;
    int minimum = INT_MAX;
    int maximum = INT_MIN;
    for (i = 0; i < size; i++)
    {

        if (arr[i] > maximum)
        {
            maximum = arr[i];
            maxindex = i;
        }
        if (arr[i] < minimum)
        {
            minimum = arr[i];
            minindex = i;
        }
        // minimum = min(arr[i],minimum);
        // maximum =max(arr[i],maximum);
    }
    cout << "Minimum = " << maximum << " "
         << "Index = " << maxindex << endl;

    cout << "Minimum = " << minimum << " "
         << "Index = " << minindex << endl;
}