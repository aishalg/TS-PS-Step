#include<bits/stdc++.h>
using namespace std;

int main(){

 int arr[10]={1,3,67,21,4,67,9,87,55,10};
 int k;
 cin>>k;

 sort(arr,arr+10);

 int n1,n2;
int i;
bool f=0;
 for ( i=9;i>=0;i--){
    if (arr[i]<k){
        n1=arr[i];
        break;
    }
 }


for (int j=0;j<10;j++){
    if (arr[j]=k-n1){
        f=1;
        n2= arr[j];
    }
 }

if (!f){
    i--;
}

cout<<n1<<" "<<n2;
    return 0;
}
