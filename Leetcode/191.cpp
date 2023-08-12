#include <bits/stdc++.h>
using namespace std;

class solution
{
public:
    int hammingweight(uint32_t n)
    {
        int i = 0;
        int c = 0;

        while (n > 0)
        {
            i = n % 2;
            n = n / 2;
            c += i;
        }
        return c;
    }
};

int main()

{
    solution s;
    cout << s.hammingweight(11);
}
