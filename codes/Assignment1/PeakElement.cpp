#include<bits/stdc++.h>
using namespace std;
int findpeakelement(int a[],int low,int high,int n){
    int mid=low+((high-low)/2);
    if((mid==0 || a[mid-1]<=a[mid]) && (mid==n-1 || a[mid+1]<=a[mid])){
        return mid;
    }

    else if(mid>0 && a[mid-1]>a[mid]){
        return findpeakelement(a,low,mid-1,n);
    }
    else{
        return findpeakelement(a,mid+1,high,n);
    }
}
int peakElement(int a[], int n)
{
   return findpeakelement(a,0,n-1,n);
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<peakElement(a,n);
}
