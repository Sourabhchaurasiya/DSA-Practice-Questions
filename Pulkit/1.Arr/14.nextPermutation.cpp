#include <bits/stdc++.h>
using namespace std;
void nextPermutation(vector<int> &nums)
{
    int peak = -1, n = nums.size();
    for (int i = n - 1; i > 0; i--)
    {
        if (nums[i] > nums[i - 1])
        {
            peak = i;
            break;
        }
    }
    if (peak == -1)
        reverse(nums.begin(), nums.end());
    else
    {
        for (int i = n - 1; i >= peak; i--)
        {
            if (nums[i] > nums[peak - 1])
            {
                swap(nums[i], nums[peak - 1]);
                break;
            }
        }
        reverse(nums.begin() + peak, nums.end());
    }
}