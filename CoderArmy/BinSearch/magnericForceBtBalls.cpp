#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool solve(vector<int> &pos, int m, int mid)
    {
        bool flag = true;
        m--;
        int prev = pos[0];
        for (int i = 1; i < pos.size(); i++)
        {
            if (pos[i] - prev >= mid)
            {
                prev = pos[i];
                m--;
            }
            else
            {
                continue;
            }
        }
        return (m > 0 ? false : true);
    }
    int maxDistance(vector<int> &pos, int m)
    {
        sort(pos.begin(), pos.end());
        int n = pos.size();
        int start = 1;
        int end = pos[n - 1] - pos[0];
        int res;

        while (start <= end)
        {
            int mid = start + (end - start) / 2;
            if (solve(pos, m, mid))
            {
                res = mid;
                // return res;
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
        return res;
    }
};