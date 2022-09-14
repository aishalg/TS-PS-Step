#include<bits/stdc++.h>
using namespace std;

int main(){

    // approach 1

 int arr[5] = {1,2,3,4,5};
 int arr1[4] = {3,4,5,6};

vector <int> v;
for (int i=0;i<5;i++){
    v.push_back(arr[i]);
}

for (int i=0;i<4;i++){
    v.push_back(arr1[i]);
}

sort(v.begin(),v.end());

for (auto i:v){
    cout<<i<<" ";
}


   // approach 2

   


    return 0;
}
