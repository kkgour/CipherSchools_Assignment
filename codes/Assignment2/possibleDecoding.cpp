#include<bits/stdc++.h>
using namespace std;
void decode(int n,string s){
    if(n==0){
        cout<<s<<endl;
        return;
    }
    int lsd1=n%10;
    if(lsd1!=0)
        decode(n/10,char('a'+lsd1-1)+s);
    if(n/10!=0 && n%100<27){
        int lsd2=n%100;
        if(lsd2>9)
            decode(n/100,char('a'+lsd2-1)+s);
    }
}
int main(){
    int n;
    cin>>n;
    string s="";
    decode(n,s);
}
