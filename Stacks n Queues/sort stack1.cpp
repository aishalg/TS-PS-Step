#include<bits/stdc++.h>
using namespace std;

int main(){

 stack<int> st;
 st.push(11); 
 st.push(10);
 st.push(13);
 st.push(90);
 st.push(1); 

 // {1,90,13,10,11} => {1,10,11,13,90}


stack<int> st1;


while(!st.empty()){
    int popped = st.top();
    st.pop();

  while(!st1.empty() && st1.top()>popped){
        st.push(st1.top());
        st1.pop();
  }


  st1.push(st.top());

}

while(!st1.empty()){
    cout<<st1.top()<<" ";
    st1.pop();
}


    return 0;
}

