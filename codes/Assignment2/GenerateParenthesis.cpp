#include<bits/stdc++.h>
using namespace std;
void gen(int l,int r,string s){
    if(r<l)
        return;
    if(l==0 && r==0){
        cout<<s<<endl;
        return;
    }

    else{
        if(l>0)
            gen(l-1,r,s+"(");
        if(r>0)
            gen(l,r-1,s+")");
    }
}
int main(){
    int n;
    cin>>n;
    int l=n,r=n;
    string s="";
    gen(l,r,s);
}

