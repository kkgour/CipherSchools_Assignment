#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v(n-1);
    for(int i=0;i<n-1;i++){
        cin>>v[i];
    }
    int CalSum=n*(n+1)/2;
    cout<<CalSum<<endl;
    int sum=0;
    for(int i=0;i<n-1;i++){
        sum+=v[i];
    }
    cout<<sum<<endl;
    cout<<CalSum-sum;
}
