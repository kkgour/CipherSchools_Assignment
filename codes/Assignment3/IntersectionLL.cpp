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
int length(node *head){
    node *temp=head;
    int count=0;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
}
void findIntersection(node *head1,node *head2){
    if(length(head1)>length(head2)){
        int diff=length(head1)-length(head2);
        while(diff!=0){
            head1=head1->next;
            diff--;
        }
    }
    else if(length(head1)<length(head2)){
        int diff=length(head2)-length(head1);
        while(diff!=0){
            head2=head2->next;
            diff--;
        }
    }
    while(head1!=head2){
        head1=head1->next;
        head2=head2->next;
    }
    cout<<"Linked List are intersecting at "<<head1->data;
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
    node *head1 =new node(9);
    head1->next=new node(5);

    node *x=new node(4);
    x->next=new node(8);
    head1->next->next=x;

    node *head2=new node(3);
    head2->next=x;

    x->next->next=new node(7);

    print(head1);
    print(head2);

    findIntersection(head1,head2);

}
