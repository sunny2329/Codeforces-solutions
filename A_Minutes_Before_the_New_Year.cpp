#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >>m;
        int h = n*60;
        cout << 1440- (h+m) << endl; 
    }
}