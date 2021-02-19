#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    struct node* next;
    node(int n){
        this->data=n;
        this->next=NULL;
    }
};
node * reorder(node *head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    node *odd=head;
    node *even=head->next;
    node *evenhead=even;

    while(even!=NULL && even->next!=NULL){
        odd->next=even->next;
        odd=odd->next;
        even->next=odd->next;
        even=even->next;
    }
    odd->next=evenhead;
    return head;

}
void print(node *head){
    node *temp1=head;
    while(temp1!=NULL){
        cout<<temp1->data<<"->";
        temp1=temp1->next;
    }
    cout<<"NULL"<<endl;
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
    n5->next=NULL;

    print(head);

    node *result=reorder(head);
    print(result);

}
