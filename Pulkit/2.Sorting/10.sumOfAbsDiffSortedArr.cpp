#include<bits/stdc++.h>
using namespace std;
vector<int>getSumAbsoluteDifferences(vector<int>&nums){
    int n=nums.size();
    vector<int>pref(n),suff(n);
    for(int i=0;i<n;i++)
        pref[i]=(i==0)?nums[i]:pref[i-1]+nums[i];
    for(int i=n-1;i>=0;i--)
        suff[i]=(i==n-1)?nums[i]:suff[i+1]+nums[i];
    vector<int>ans(n);
    for(int i=0;i<n;i++){
        int prefSum=(i==0)?0:pref[i-1];
        int sufSum=(i==n-1)?0:suff[i+1];
        int leftSum=i*nums[i]-prefSum;
        int rightSum=sufSum-(n-i-1)*nums[i];
        ans[i]=leftSum+rightSum;
    }
    return ans;
}