#include <bits/stdc++.h>
using namespace std;
int numSubarrayProductLessThanK(vector<int> &nums, int k)
{
    long l = 0, r = 0, n = nums.size(), ans = 0;
    long prod = 1;
    for (; r < n; r++)
    {
        prod *= nums[r];
        for (; prod >= k && l <= r; l++)
        {
            prod /= nums[l];
        }
        ans += (r - l + 1);
    }
    return ans;
}