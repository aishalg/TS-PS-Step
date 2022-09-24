#include<bits/stdc++.h>
using namespace std;
int top=-1;
void enq(int a, vector<int> &v){
    v.push_back(a);
    return;
}

int deq(vector<int> &v){
      top++;
    if(top<v.size()) return v[top];
    
    else return -1;
  
}

int main(){

 vector<int> v;
    enq(1,v);
    enq(11,v);
    enq(12,v);
    enq(13,v);
    // for (auto i:v){
    //     cout<<i<<" ";
    // }
    cout<<endl;
    cout<<deq(v)<<endl;
    cout<<deq(v)<<endl;
    cout<<deq(v)<<endl;


    return 0;
}
