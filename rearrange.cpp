#include<bits/stdc++.h>
using namespace std;

int main(){

 int arr[7]={1,-3,5,-2,11,4,-9};

vector <int> v1;
vector <int> v2;
for (int i=0;i<7;i++){
    if (arr[i]<0){
        v1.push_back(arr[i]);
    }

    else {
         v2.push_back(arr[i]);
    }
}
vector <int > v;
for (auto i:v1){
    v.push_back(i);
}

for (auto j:v2){
    v.push_back(j);
}
for (auto x:v){
    cout<<x<<" ";
}

    return 0;
}
