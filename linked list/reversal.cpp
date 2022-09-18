#include<bits/stdc++.h>
using namespace std;

struct node ()
{
    int data;
    struct node* next;
};

	// struct node* head;



void insert (int data,int n){
 
    node* temp1= new node();
    temp1->data= data;
    temp1->next=NULL; 

    if (n==1){
        temp1->next=head; 
        head=temp1;
        return;
    }

    node* temp2=head;
    for (int i=0;i<n-2;i++){
      temp2 =  temp2 -> next; 
         }

 temp1 -> next = temp2->next;
 temp2 ->next =temp1;

    
}

void print(){
    node* temp = head;
    while(temp!=NULL){
        cout<< temp -> data<<" ";
        temp=temp -> next;
    }
    cout<<endl;
}

struct node* reverse(struct node* head){
   struct node *prev,*current, * next;
    current = head;
    prev = NULL;
    while (current != NULL){
        next = current -> next;
        current -> next = prev;
        prev = current;
        current=next;
    }
head = prev;
return head;
}

int main(){
struct node* head = NULL;
 insert(2,1);
 print();
 reverse(head);

 print();
    return 0;
}
