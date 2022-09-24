#include<bits/stdc++.h>
using namespace std;

int main(){

 int arr[10] ={1,2,3,4,5,6,7,8,9,10};

 int k;
 cin>>k;

 stack<int> st;

 for (int i=0;i<k;i++){
    st.push(arr[i]);
 }

  for (int i=0;i<k;i++){
    arr[i]=st.top();
    st.pop();
 }

  for (int i=0;i<10;i++){
 cout<<arr[i]<<" ";
 }
 
    return 0;
}
