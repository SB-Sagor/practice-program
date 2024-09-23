#include<iostream>
using namespace std;
int main(){
    int n=5,i,j;

    for (i=0;i<n;i++){
        for(j=0;j<i+1;j++){
            cout<<"*";
        }
        for(j=0;j<2*(n-i-1);j++){
            cout<<" ";
        }
        for(j=0;j<i+1;j++){
            cout<<"*";
        }
       cout<<endl;
  
    } 
    for (i=n-2;i>=0;i--){
         for(j=0;j<i+1;j++){
            cout<<"*";
        }
        for(j=0;j<2*(n-i-1);j++){
            cout<<" ";
        }
        for(j=0;j<i+1;j++){
            cout<<"*";
        }
        cout<<endl;
     
    }
}
    
