#include<bits/stdc++.h>
using namespace std;
int candidate(int a[],int size){
    int index=0,count=0;
    for(int i=0;i<size;i++){
        if(a[i]==a[index])
            count++;
        else
            count--;
        if(count==0){
            index=i;
            count=1;
        }
    }
    return a[index];
}
int majorityElement(int a[], int size)
{
    int x=candidate(a,size);
    int c=0;
    for(int i=0;i<size;i++){
        if(a[i]==x)
        c++;
    }
    if(c>size/2)
        return x;
    else
        return -1;

}
int main(){
    int size;
    cin>>size;
    int a[size];
    for(int i=0;i<size;i++){
        cin>>a[i];
    }
    cout<<majorityElement(a,size);

}
