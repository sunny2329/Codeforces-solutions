#include<bits/stdc++.h>
using namespace std;


int main()
{
   int t;
   cin >> t;
   while(t--){
    string s;
    cin >> s;
    int l= s[0]-'0' + s[1] - '0' + s[2] - '0';
    int n= s[3]-'0' + s[4] - '0' + s[5] - '0';

    if(l==n) cout << "YES" << endl;
    else cout << "NO" << endl;
   }
}