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
node *sumhelper(node *head1,node *head2,int diff){
    if(head1==NULL)
        return NULL;
    node *my_result=NULL;
    if(diff==0){
        my_result=new node(head1->data+head2->data);
    }
    else
       my_result=new node(head1->data);

    node *rec_result=NULL;
    if(diff==0){
        rec_result=sumhelper(head1->next,head2->next,diff);
    }
    else
        rec_result=sumhelper(head1->next,head2,diff-1);

    if(rec_result!=NULL && rec_result->data>9){
        rec_result->data=(rec_result->data)%10;
        my_result->data=my_result->data+1;

    }
    my_result->next=rec_result;
    return my_result;

}
node *sum(node *head1,node *head2){
   /* if(head1==NULL && head2==NULL)
        return NULL;
    if(head1==NULL)
        return head2;
    if(head2==NULL)
        return head1;*/

    node *result=NULL;
    if(length(head1)>length(head2)){
        int diff=length(head1)-length(head2);
        result=sumhelper(head1,head2,diff);
    }
    else{
        int diff=length(head2)-length(head1);
        result=sumhelper(head2,head1,diff);
    }

    node *temp=new node(1);
    if(result->data>9){
        result->data=(result->data)%10;
        temp->next=result;
        result=temp;
    }
    return result;

}

void print(node *head){
    node *temp1=head;
    while(temp1!=NULL){
        cout<<temp1->data<<"->";
        temp1=temp1->next;
    }
    cout<<"NULL";
}
int main(){
    node *head1 =new node(9);
    head1->next=new node(9);
    node *x=new node(9);
    head1->next->next=x;
    x->next=new node(9);

    print(head1);
    cout<<endl;

    node *head2=new node(9);
    head2->next=new node(9);

    print(head2);
    cout<<endl;

    node *result=NULL;
    result=sum(head1,head2);

    print(result);

}
