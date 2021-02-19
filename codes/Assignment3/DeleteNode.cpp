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
node *DeleteNode(node *head,int data){
    if(head->data==data){
        head=head->next;
        return head;
    }
    node *temp=head->next;
    node *prev=head;
    while(temp!=NULL){
        if(temp->data==data){
            prev->next=temp->next;
            temp->next=NULL;
            temp=NULL;
            break;
        }
        prev=temp;
        temp=temp->next;
    }
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

    int data;
    cin>>data;
    head=DeleteNode(head,data);

    print(head);

}
