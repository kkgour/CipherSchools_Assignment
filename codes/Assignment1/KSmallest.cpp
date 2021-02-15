#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int max=-1,maxin=-1;
    for(int i=0;i<k;i++){
        if(v[i]>max){
            max=v[i];
            maxin=i;
        }
    }
    for(int i=k;i<n;i++){
        if(v[i]<max){
            for(int j=maxin;j<k-1;j++){
                v[j]=v[j+1];
            }
            v[k-1]=v[i];
            for(int j=0;j<k;j++){
                if(v[j]>max){
                    max=v[j];
                    maxin=j;
                }
            }

        }
    }
    for(int i=0;i<k;i++)
        cout<<v[i]<<" ";

}
