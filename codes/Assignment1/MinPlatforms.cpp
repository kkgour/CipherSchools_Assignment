#include<bits/stdc++.h>
using namespace std;
int MinPlat(int arr[],int dep[],int n){
    int plat=1,res=1;
    int i=1,j=0;
    while(i<n && j<n){
        if(arr[i]<=dep[j]){
            plat++;
            i++;
        }else if(arr[i]>dep[j]){
            plat--;
            j++;
        }
        if(plat>res){
            res=plat;
        }

    }
    return res;

}
int main(){
    int arr[] = { 900, 940, 950, 1100, 1500, 1800 };
    int dep[] = { 910, 1200, 1120, 1130, 1900, 2000 };
    int n=6;
    cout<<MinPlat(arr,dep,n);
    return 0;
}
