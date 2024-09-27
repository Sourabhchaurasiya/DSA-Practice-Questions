#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> merge2SortedArrays(vector<int> &left, vector<int> &right)
    {
        int i = 0, j = 0;
        vector<int> ans;
        while (i < left.size() && j < right.size())
        {
            if (left[i] <= right[j])
            {
                ans.push_back(left[i]);
                i++;
            }
            else
            {
                ans.push_back(right[j]);
                j++;
            }
        }
        while (i < left.size())
            ans.push_back(left[i++]);
        while (j < right.size())
            ans.push_back(right[j++]);
        return ans;
    }
    vector<int> sortArray(vector<int> &nums)
    {
        int n = nums.size();
        if (n == 1)
            return nums;
        vector<int> left(nums.begin(), nums.begin() + n / 2);
        vector<int> right(nums.begin() + n / 2, nums.end());
        left = sortArray(left);
        right = sortArray(right);
        return merge2SortedArrays(left, right);
    }
};
// Optimal
vector<int> sortArray(vector<int> &nums)
{
    int arr[100001] = {0};
    for (int i = 0; i < nums.size(); i++)
        arr[nums[i] + 50000]++;
    for (int i = 0; i < 100000; i++)
        arr[i + 1] = arr[i + 1] + arr[i];
    for (int i = 100000; i > 0; i--)
        arr[i] = arr[i - 1];
    arr[0] = 0;
    vector<int> ans(nums.size(), 0);
    for (int i = 0; i < nums.size(); i++)
    {
        ans[arr[50000 + nums[i]]] = nums[i];
        arr[50000 + nums[i]]++;
    }
    return ans;
}