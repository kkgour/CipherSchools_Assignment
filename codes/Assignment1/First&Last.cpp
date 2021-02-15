#include <bits/stdc++.h>
using namespace std;

int main() {
	    int n,x;
	    cin>>n>>x;

	    int f=-1,l=-1;
	    vector<int> a(n);
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }

	    for(int i=0;i<n;i++){
	        if(f==-1 && a[i]==x){
	            f=i;
	        }
	        if(l==-1 && a[n-1-i]==x){
	            l=n-1-i;
	        }
	        if(l!=-1 && f!=-1)
	            break;
	    }
	    if(f!=-1)
	    cout<<f<<" "<<l<<endl;
	    else
	    cout<<-1<<endl;

	return 0;
}
