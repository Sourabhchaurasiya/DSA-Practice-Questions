#include<bits/stdc++.h>
using namespace std;
vector<int>runningSum(vector<int>& nums){
    vector<int> pre(nums.size());
    for(int i=0;i<nums.size();i++){
        pre[i]=i?pre[i-1]+nums[i]:nums[i];
    }
    return pre;
}


vector<int>runningSum(vector<int>& nums){
    vector<int> ans(nums.size());
    for(int i=0;i<nums.size();i++){
        int cur_sum=0;
        for(int j=0;j<=i;j++){
            cur_sum+=nums[j];
        }
        ans[i]=cur_sum;
    }
    return ans;
}