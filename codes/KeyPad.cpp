#include<bits/stdc++.h>
using namespace std;
string getValue(char ch){
    switch(ch){
        case '1':return "abc";
            break;
        case '2':return "def";
            break;
        case '3':return "ghi";
            break;
        default :string s2="";
                return s2;
            break;
    }
}
vector<string> getAllComb(string s){
    if(s.length()==0){
        vector<string> emptylist;
        emptylist.push_back("");
        return emptylist;
    }
    string first=getValue(s[0]);
    vector<string> nextcomb=getAllComb(s.substr(1));
    vector<string> res;

    for(int i=0;i<first.length();i++){
        for(int j=0;j<nextcomb.size();j++){
            string s1=first[i]+nextcomb[j];
            res.push_back(s1);
        }
    }
    return res;
}
int main(){
    string s;
    cin>>s;
    vector<string> v=getAllComb(s);
    vector<string> :: iterator itr;
    for(itr=v.begin();itr!=v.end();itr++){
        cout<<*itr<<endl;
    }


}
