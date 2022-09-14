#include<bits/stdc++.h>
using namespace std;

int main(){

 
int arr[9]={1,2,3,2,2,1,4,5,5};



for (int i=0;i<9;i++){
   if(count(arr,arr+9,arr[i])==1){
        cout<<arr[i];
        break;
   }
}




    return 0;
}
