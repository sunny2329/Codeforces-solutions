#include <bits/stdc++.h>
using namespace std;

class solution
{
public:
    int triangularsum(vector<int> &nums)
    {
        int n = nums.size();
        for (int i = n - 1; i >= 0; i--)
        {
            for (int j = 0; j < i; j++)
            {
                nums[j] = (nums[j] + nums[j + 1]) % 10;
            }
        }
        return nums[0];
    }
};

int main()
{
    solution p;
    vector<int> nums = {1, 2, 3, 4, 5};
    cout << p.triangularsum(nums);
}