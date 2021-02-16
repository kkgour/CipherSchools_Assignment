#include<bits/stdc++.h>
using namespace std;
int maxSubArraySum(vector<int> &v, int n)
{
   int max= 0,sum= 0;
   for (int i = 0; i < n; i++)
   {
       sum = sum + v[i];
       if (sum < 0)
           sum = 0;
       else if (max < sum)
           max = sum;
   }
   return max;
}
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    cout<<maxSubArraySum(v,n);
}
