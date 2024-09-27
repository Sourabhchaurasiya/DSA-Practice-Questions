#include <bits/stdc++.h>
using namespace std;
int findSubString(string str)
{
    vector<int> count(256, 0);
    int diff = 0;
    for (int i = 0; i < str.size(); i++)
    {
        // string str="AABBBCBBAC"; found distinct characters.
        if (count[str[i]] == 0)
        {
            diff++;
            count[str[i]]++;
            cout << "diff: " << diff << " ";
        }
    }
    fill(count.begin(), count.end(), 0); // for again making them zero

    int len = str.size();
    int first = 0, second = 0;
    while (second < str.size())
    {
        if (diff != 0)
        {
            if (count[str[second]] == 0)
            {
                count[str[second]]++;
                diff--;
            }
            else // if (count[str[second]]>=1)
            {
                count[str[second]]++;
            }
        }

        if (diff == 0)
        {
            while (diff == 0)
            {
                count[str[first]]--;

                if (count[str[first]] == 0)
                {
                    diff++;
                    len = min(len, second - first + 1);
                    first++;
                    break;
                }
                first++;
            }
        }
        second++;
    }
    return len;
}