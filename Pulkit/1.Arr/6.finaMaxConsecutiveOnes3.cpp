#include <bits/stdc++.h>
using namespace std;
int main()
{
    return 0;
}
int longestOnes(vector<int> &nums, int k)
{
    int zero_count = 0;
    int n = nums.size();
    int l = 0, ans = INT_MIN;
    for (int r = 0; r < n; r++)
    {
        if (nums[r] == 0)
            zero_count++;
        while (zero_count > k)
        {
            if (nums[l] == 0)
                zero_count--;
            l++;
        }
        ans = max(ans, r - l + 1);
    }
    return ans;
}