#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        int m = n%2020;
        int d = n/2020;

        if(m<=d) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}