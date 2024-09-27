#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        int minDiff(int arr[],int N,int k){
            int ans=INT_MAX;
            sort(arr,arr+N);
            for(int i=0;i+k-1<N;i++)
                ans=min(ans,arr[i+k-1]-arr[i]);
            return ans;
        }
};