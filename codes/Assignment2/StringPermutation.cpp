#include<bits/stdc++.h>
using namespace std;
void generateComb(string s, vector<char> &v){
    if(s.length()==v.size()){
        for(int i=0;i<v.size();i++){
            cout<<v[i];
        }
        cout<<endl;
        return;
    }
    bool flag=false;
    for(int i=0;i<s.length();i++){

        for(int j=0;j<v.size();j++){
            if(v[j]==s[i]){
                flag=true;
                break;
            }
        }
        if(flag){
            flag=false;
            continue;
        }
        v.push_back(s[i]);
        generateComb(s,v);
        v.pop_back();
    }
}
int main(){
    string s;
    cin>>s;
    vector<char> v;
    generateComb(s,v);
}
