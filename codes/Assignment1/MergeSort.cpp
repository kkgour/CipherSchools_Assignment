#include<bits/stdc++.h>
using namespace std;
void Merge(int *B,int *C,int *A){
    int i=0,j=0,k=0;
    int p=sizeof(B)/sizeof(B[0]);
    int q=sizeof(C)/sizeof(C[0]);
    while(i<p && j<q){
        if(B[i]<C[j]){
            A[k]=B[i];
            i++;
            k++;
        }
        else{
            A[k]=C[j];
            j++;
            k++;
        }
    }
    if(i==p){
        while(j<q){
            A[k]=C[j];
            j++;
            k++;
        }
    }
    else{
        while(i<p){
            A[k]=B[i];
            i++;
            k++;
        }
    }
}
void MergeSort(int *A,int n){
    int res[n];
    if(n>1){
        int m=(int)floor(n/2);
        int B[m];
        int C[n-m];
        for(int i=0;i<m;i++){
            B[i]=A[i];
        }
        for(int i=m;i<n;i++){
            C[i-m]=A[i];
        }
        MergeSort(B,m);
        MergeSort(C,n-m);
        Merge(B,C,A);
    }
}
int main(){
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    MergeSort(A,n);
    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
}
