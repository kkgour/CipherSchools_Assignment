#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<int> a(n+m,0);
    vector<int> b(m);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    //start 2nd array from last till 0
    //if 2nd array element is bigger that a[n-1] then no problem, decrement 2nd array pointer
    //if 2nd array element is smaller than a[n-1], then while 2nd array element is bigger, decrement it and swap
    int j=n+m-1;
    for(int i=m-1;i>=0;i--){
        a[j]=b[i];
        if(a[j]<a[n-1]){
            swap(a[j],a[n-1]);
            int x=n-1;
            while(a[x]<a[x-1] && x>0){
                swap(a[x-1],a[x]);
                x--;
            }
        }
        j--;
    }
    for(int i=0;i<n+m;i++){
        cout<<a[i]<<" ";
    }
}
