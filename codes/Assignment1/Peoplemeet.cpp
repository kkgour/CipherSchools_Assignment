#include <bits/stdc++.h>
using namespace std;

int main() {

	int x1,x2,v1,v2;
	cin>>x1>>v1>>x2>>v2;

	// Default cases when it's not possible for x1 and x2 to meet.
	if((x1>x2 && v1>v2) || (x2>x1 && v2>v1)){
	    cout<<"NO";
	    return 1;
	}

	if((x2-x1)%(v2-v1)==0)
	    cout<<"YES";
	return 0;
}
