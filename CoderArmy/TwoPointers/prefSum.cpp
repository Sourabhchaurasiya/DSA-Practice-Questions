#include<bits/stdc++.h>
using namespace std;
bool divide(vector<int>arr){
    int maxi=INT_MIN,prefix=0,total_sum=0,n=arr.size();
    for(int i=0;i<n;i++)total_sum+=arr[i];
    for(int i=0;i<n;i++)prefix+=arr[i];
    if(total_sum==2*prefix)return 1;
    else return 0;
}