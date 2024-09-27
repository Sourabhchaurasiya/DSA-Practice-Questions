#include <bits/stdc++.h>
using namespace std;
int main()
{
    return 0;
}
vector<int> twoSum(vector<int> &numbers, int target)
{
    vector<int> ans;
    int start = 0, end = numbers.size() - 1;
    while (start < end)
    {
        if (numbers[start] + numbers[end] == target)
        {
            ans.push_back(start + 1);
            ans.push_back(end + 1);
            return ans;
        }
        else if (numbers[start] + numbers[end] < 1)
        {
            start++;
        }
        else
            end--;
    }
    return ans;
}

// with -ve test cases
class Solution
{
public:
    vector<int> twoSum(vector<int> &numbers, int target)
    {
        int i = 0;
        int j = numbers.size() - 1;

        while (i < j)
        {
            int sum = numbers[i] + numbers[j];

            if (sum > target)
            {
                j--;
            }
            else if (sum < target)
            {
                i++;
            }
            else
            {
                return {i + 1, j + 1};
            }
        }

        return {};
    }
};