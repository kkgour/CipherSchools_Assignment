#include<bits/stdc++.h>
using namespace std;
void possiblepath(vector<vector<int> > v, int x,int y,int n, int m,string s){
    int k=v[x][y];
        string s1="";
        stringstream ss;
        ss<<k;
        ss>>s1;
        s1=s1+" ";
    if(x==n-1 && y==m-1){
        cout<<s+s1<<endl;
        return;
    }
    if(x<n-1){
        possiblepath(v,x+1,y,n,m,s+s1);
    }
    if(y<m-1){
        possiblepath(v,x,y+1,n,m,s+s1);
    }

}
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int> > v(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>v[i][j];
        }
    }
    string s="";
    possiblepath(v,0,0,n,m,s);
}
