#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<int> l(n);
    vector<int> r(n);

    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if(v[i]>max){
            l[i]=v[i];
            max=v[i];
        }
        else
            l[i]=max;
    }
    max=INT_MIN;
    for(int i=n-1;i>=0;i--){
        if(v[i]>max){
            r[i]=v[i];
            max=v[i];
        }
        else
            r[i]=max;
    }
    int res=0;
    for(int i=0;i<n;i++){
        res+=(min(l[i],r[i])-v[i]);
    }
    cout<<res;
}
