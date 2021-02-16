#include<bits/stdc++.h>
using namespace std;
int cinvert(vector<int> &v,int n){
    int c=0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(v[i]>v[j])
                c++;
        }
    }
    return c;
}
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    cout<<cinvert(v,n);
}
