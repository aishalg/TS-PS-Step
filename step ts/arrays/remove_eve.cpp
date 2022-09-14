#include<bits/stdc++.h>
using namespace std;

int main(){

 int arr[8] = {1,2,3,4,5,6,8,7};

 // approach 1

 vector <int> v;

 for (int i=0;i<8;i++){
    if (arr[i]%2==1){
        v.push_back(arr[i]);
    }
 }

 for (auto i:v){
    cout<<i<<" ";
 }
cout<<endl;

 // approach 2

 for (int i=0;i<8;i++){
    if (arr[i]%2==0){
        arr[i]=arr[i+1];
    }
 }

  for (int i=0;i<8;i++){
    cout<<arr[i]<<" ";
 }
 
    return 0;
}
