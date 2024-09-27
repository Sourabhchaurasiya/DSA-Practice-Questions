#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int mySqrt(int x)
    {
        if (x < 2)
            return x;
        int start = 0, end = x, mid, ans;

        while (start <= end)
        {

            mid = start + (end - start) / 2;
            if (mid == x / mid)
                return mid;
            else if (mid < x / mid)
            {
                ans = mid;
                start = mid + 1;
            }
            else
                end = mid - 1;
        }
        return ans;
    }
};
int main()
{
    int s = sqrt(1000);
    cout << s;
    return 0;
}