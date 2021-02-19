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
node* revll(node *head){
    node *prev=NULL;
    node *curr=head;
    node *temp=head;
    while(curr!=NULL){
        temp=curr->next;
        curr->next=prev;
        prev=curr;
        curr=temp;
    }
    return prev;
}
void print(node *head){
    node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL";
}
int main(){
    node *head=NULL;
    head=new node(1);
    head->next=new node(2);
    head->next->next=new node(3);

    head=revll(head);
    print(head);

    return 0;

}
