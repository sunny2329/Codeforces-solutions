#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int maxi = -1;
        for (int i = 0; i < s.length(); i++)
        {
            int a = int(s[i]) - 96;
            maxi = max(maxi,a);
        }
        cout << maxi << endl;
    }
}