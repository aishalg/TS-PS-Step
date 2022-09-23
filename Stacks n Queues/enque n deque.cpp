#include <iostream>

using namespace std;

class myStack {
  private:
  int * stackArr;
  int capacity;
  int numElements;
  public:
  //myStack(int size);
  //bool isEmpty();
  //int getTop();
  //bool push(int value);
  //int pop();
  //int getSize();
  //void showStack();
};

class newQueue {
private:
 
public:
stack <int> st1;
stack <int> st2;
    //Inserts Element in the Queue
    newQueue(int size) {
   
        
    }

    void enqueue(int value) {
        st.push(value);
    }
    //Removes and Returns Element From Queue
    int dequeue() {
    while(!st1.empty()){
    st2.push(st1.top());
    st1.pop();
    }
    while(!st2.empty()){
    return st2.top();
    st2.pop();}
    
    
        return -1;
    }

};