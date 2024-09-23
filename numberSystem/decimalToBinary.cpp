#include<iostream>
using namespace std;
int decToBinary(int decNum){
    int ans=0,pow=1;
    while(decNum>0){
        int rem = decNum%2;
        decNum = decNum / 2;

        ans = ans + (rem*pow);
        pow = pow*10;
    }
    return ans;
}
int main(){
    int num;
    cout<<"Enter the decimal number = ";
    cin>>num;
    cout<<"The binary number is = "<<decToBinary(num)<<endl;
    return 0;
}