#include<bits/stdc++.h>
using namespace std;

ListNode* MiddleNode(Node* head){
    node *slow =head , *fast = head;
    while(fast!=NULL && fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
        return slow;
}

int main(){

 

    return 0;
}
