#include <bits/stdc++.h>
using namespace std;

int maxSum(vector<int> &nums)
{
    int maxi = -1;

    for (int i = 0; i < nums.size() - 1; i++)
    {
        string s = to_string(nums[i]);
        sort(s.begin(), s.end());
        int d = s.length();
        for (int j = i + 1; j < nums.size(); j++)
        {
            string r = to_string(nums[j]);
            sort(r.begin(), r.end());

            if (r[r.length() - 1] == s[s.length() - 1])
            {
                maxi = max(maxi, (nums[i] + nums[j]));
            }
        }
    }
    return maxi;
}

int main()
{
}