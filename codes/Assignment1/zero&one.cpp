#include<bits/stdc++.h>
using namespace std;
int main(){
    int v[9]={0,0,1,1,0,1,0,1,1};
    int n=sizeof(v)/sizeof(v[0]);
    int low=0,high=n-1;
    while(low<high){
        if(v[low]==1 && v[high]==0){
            swap(v[low],v[high]);
            low++;
            high--;
        }
        else{
            if(v[low]==0)
                low++;
            if(v[high]==1)
                high--;
        }
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}
