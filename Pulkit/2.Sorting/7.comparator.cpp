#include <bits/stdc++.h>
using namespace std;

bool comp(int a,int b){
    if(a>b)return 1;
    else return false;
}
int main(){
    int n=4;
    int arr[]={1,4,6,7};
    sort(arr,arr+n,comp);

    for(int i=0;i<n;i++)
        cout<<arr[i]<<' ';
    cout<<'\n';
    vector<int>v={4,5,2,6,8};
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout<<v[i]<< ' ';
    }
}