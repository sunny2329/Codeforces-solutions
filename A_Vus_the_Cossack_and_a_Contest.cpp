#include <bits/stdc++.h>
using namespace std;



int main()
{
    int n,m,k;

    cin >> n >> m >> k;


    int mi = min(m,k);
    if(n<=mi) cout << "Yes" << endl;
    else cout << "No" << endl;
}