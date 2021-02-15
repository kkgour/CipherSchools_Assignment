#include<bits/stdc++.h>
using namespace std;
int matSearch(vector<vector <int> > &mat, int n, int m, int x)
	{
	    int i=0;
	    int j=m-1;
	    while(j>=0 && i<n){
	        if(mat[i][j]==x)
	            return 1;
	        if(mat[i][j]>x){
	            j--;
	        }
	        else
	            i++;
	    }
	    return 0;
	}
int main(){
    int n,m;
    cin>>n>>m;
    vector< vector<int> > v(n, vector<int>(m,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>v[i][j];
        }
    }
    int x;
    cin>>x;
    cout<<matSearch(v,n,m,x);
}
