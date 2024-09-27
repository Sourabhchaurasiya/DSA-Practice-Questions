#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int n = nums.size();
        long long maxi = INT_MIN, prefix = 0;
        for (int i = 0; i < n; i++)
        {
            prefix += nums[i];
            maxi = max(maxi, prefix);
            if (prefix < 0)
                prefix = 0;
        }
        return maxi;
    }
};