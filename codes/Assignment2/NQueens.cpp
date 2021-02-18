#include<bits/stdc++.h>
using namespace std;
bool isSafe(vector<vector<int> > &mat,int i,int k){
    for(int r=0;r<i;r++){
        if(mat[r][k]==1){
            return false;
        }
    }
     int x = i,y=k;


    while (x >= 0 && y >= 0) {
    if (mat[x][y] == 1) {
        return false;
        }
        x--;
        y--;
    }

    x = i;
    y = k;
    while (x >= 0 && y < mat.size()) {
        if (mat[x][y] == 1) {
            return false;
        }
        x--;
        y++;
    }

    return true;

}
bool findpos(vector<vector<int> > &mat,int x){
    if(x==mat.size()){
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                cout<<mat[i][j];
            }
            cout<<endl;
        }
        return true;
    }
    for(int i=0;i<mat[0].size();i++){
        if(isSafe(mat, x, i)==true){
            mat[x][i]=1;
            bool isplaced=findpos(mat,x+1);
            if(isplaced){
                return true;
            }
            mat[x][i]=0;
        }

    }
    return false;
}

int main(){
    int n;
    cin>>n;
    vector< vector<int> > mat(n, vector<int>(n,0));

    findpos(mat,0);
}
