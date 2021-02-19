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
node *head=NULL;
node* revRec(node *temp){
    if(temp->next==NULL){
        head=temp;
        return temp;
    }
    node* temp1=revRec(temp->next);
    temp1->next=temp;
    temp->next=NULL;
    return temp;
}
void print(){
    node *temp1=head;
    while(temp1!=NULL){
        cout<<temp1->data<<"->";
        temp1=temp1->next;
    }
    cout<<"NULL";
}
int main(){

    head=new node(1);
    head->next=new node(2);
    node *mid=new node(3);
    head->next->next=mid;
    mid->next=new node(4);
    mid->next->next=new node(5);
    print();
    cout<<endl;

    revRec(head);

    print();
}
