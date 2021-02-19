#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    struct node * next;
    node(int n){
        this->data=n;
        this->next=NULL;
    }
};
void DetRem(node *head){
    node *fast=head;
    node *slow=head;
    bool isloop=false;
    while(slow!=NULL && fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast)
        {
            isloop=true;
            break;
        }
    }
    if(isloop){
        node *prev=NULL;
        slow=head;
        while(slow!=fast){
            prev=fast;
            fast=fast->next;
            slow=slow->next;
        }
        cout<<"Loop present at "<<slow->data;
        prev->next=NULL;
    }
}
int main(){
    node *head=new node(1);
    node *n1=new node(2);
    node *n2=new node(3);
    node *n3=new node(4);
    node *n4=new node(5);
    node *n5=new node(6);

    head->next=n1;
    n1->next=n2;
    n2->next=n3;
    n3->next=n4;
    n4->next=n5;
    n5->next=n1;

    DetRem(head);

}
