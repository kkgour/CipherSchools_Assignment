#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    vector<int> b(n);
    int j=0,k=0;
    for(int i=0;i<n;i++){
        if(i%2==0){
            b[i]=v[n-1-j];
            j++;
        }
        else{
            b[i]=v[k];
            k++;
        }
    }
    for(int i=0;i<n;i++){
        cout<<b[i]<<" ";

    }
}
