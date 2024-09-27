#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> solve(vector<vector<int>> &arr, int k)
{
    int n = arr.size();
    int m = arr[0].size();
    k = k % m;
    vector<vector<int>> result;
    for (int i = 0; i < n; i++)
    {
        vector<int> ans;
        for (int j = n - k; j < n; j++)
        {
            ans.push_back(arr[i][j]);
        }
        for (int j = 0; j < n - k; j++)
        {
            ans.push_back(arr[i][j]);
        }
        result.push_back(ans);
    }
    return result;
}
