#include<iostream>
#include<vector>
using namespace std;

int main() {
   vector<int>num={1,2,3,4,5,6};
   cout<<"Original value = ";
   
   for(int number : num){
    cout<<number<<" ";
   }
 cout<<endl;
   num.push_back(7);
   num.push_back(8);
cout<<"After adding = ";
   for(int number : num){
    cout << number << " ";
   }
   cout<<endl;
   num.at(5)=55;
   cout<<"After changing = ";
   for(int number: num){
    cout<<number <<" ";
   }
   cout<<endl;
  cout<< "Access number = ";
  cout<<num.at(4)<<" ";
  cout<<num[2];

  vector<int>::iterator iter;
  iter = num.begin();//1
  cout<< "first = "<<*iter<<endl;
  iter=num.begin()+2;//3
  cout<<"three = "<<*iter<<endl; 

  iter=num.end()-1;
  cout<<"last = "<<*iter<<endl;
}
