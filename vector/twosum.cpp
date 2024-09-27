#include<iostream>
#include<vector>
using namespace std;
vector<int> twosum(vector<int>& nums,int targets){
  
    for(int i=0;i<nums.size();i++){
        for(int j=i+1;j<nums.size();j++){
            if(nums[i]+nums[j]==targets){
        return {i,j};
            }
        }
    }
}

int main(){
    int n;
    cout<<"Enter number = ";
    cin>>n;
    vector<int>num (n);
for(int i=0;i<n;i++){
    cin>>num[i];
}

    int target ;
    cout<<"Enter targer number = ";
    cin>>target;

    vector<int> result = twosum(num,target);
    cout<<num[result[0]]<<" ,"<<num[result[1]];
}