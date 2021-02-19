#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    struct node *next;
    node(int n){
        this->data=n;
        this->next=NULL;
    }
};

bool pallin(node * head){
    node * fast=head;
    node * slow=head;
    stack<int> s;

    while(fast!=NULL && fast->next!=NULL){
        s.push(slow->data);
        slow=slow->next;
        fast=fast->next->next;
    }
    if(fast!=NULL)
        slow=slow->next;

    while(slow!=NULL){
        if(slow->data!=s.top())
            break;
        s.pop();
        slow=slow->next;
    }

    if(s.empty())
        return true;
    return false;
}
int main(){
    node *head=NULL;
    head=new node(1);
    head->next=new node(2);
    node *mid=new node(3);
    head->next->next=mid;
    mid->next=new node(2);
    mid->next->next=new node(1);
    //mid->next->next->next=new node(1);


    if(pallin(head))
        cout<<"Its a Pallindrome.";
    else
        cout<<"Its not a pallindrome.";

    return 0;

}
