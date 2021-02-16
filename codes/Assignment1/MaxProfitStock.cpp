#include <bits/stdc++.h>
using namespace std;

void stock(vector<int> &v, int n)
{
    if (n == 1)
        return;
    int i = 0;
    while (i < n - 1) {
        while ((i < n - 1) && (v[i + 1] <= v[i]))
            i++;
        if (i == n - 1)
            break;
        int buy = i++;

        while ((i < n) && (v[i] >= v[i - 1]))
            i++;
        int sell = i - 1;

        cout << "Buy on day: " << buy
             << "\t Sell on day: " << sell << endl;
    }
}

int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    stock(v, n);
    return 0;
}
