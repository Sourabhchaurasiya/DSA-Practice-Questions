#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int findUnsortedSubarray(vector<int> &nums)
    {
        vector<int> sorted_nums = nums;
        sort(sorted_nums.begin(), sorted_nums.end());
        int s = -1, e = -2;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != sorted_nums[i])
            {
                if (s == -1)
                    s = i;
                else
                    e = i;
            }
        }
        return e - s + 1;
    }
};
//O(N^2 )new approach
int findUnsortedSubarray(vector<int>&nums){
    int n=nums.size();
    vector<bool>pre_sorted(n),suf_sorted(n);
    pre_sorted[0]=true;
    for(int i=1;i<n;i++){
        if(pre_sorted[i-1]==true&& nums[i]>=nums[i-1])pre_sorted[i]=true;
        else pre_sorted[i]=0;
    }
    for(int i=0;i<n;i++){
        int min_ele=nums[i],max_ele=nums[i];
        for(int j=i;j<n;j++){
            min_ele=min(min_ele,nums[j]);
            max_ele=max(max_ele,nums[j]);
            bool is_candidate=0;
            if(i>0&& pre_sorted[i-1]==0)is_candidate=0;
            if(j<n-1&& suf_sorted[j+1]==0)is_candidate=0;
            if(min_ele<nums[i-1]||max_ele>nums[j+1])is_candidate=0;
        }
    }
    
}