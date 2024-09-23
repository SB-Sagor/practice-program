#include <bits/stdc++.h>
#include <cmath>
using namespace std;
int main()
{
    int a, b;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    int result1 = a & b;
    int result2 = a | b;
    int result3 = a ^ b;
    int leftshift = a * pow(2, b);  // a<<b
    int rightshift = a / pow(2, b); // a>>b
    cout << "Bitwise AND = " << result1 << endl;
    cout << "Bitwise OR = " << result2 << endl;
    cout << "Bitwise XOR = " << result3 << endl;
    cout << "Left shift (a * 2^b) = " << leftshift << endl;
    cout << "Right shift (a / 2^b) = " << rightshift << endl;
}