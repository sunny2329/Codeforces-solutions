#include <bits/stdc++.h>
using namespace std;


int main()
{
   long long  int t;
    cin >> t;
    while(t--){
        long long int a,b,c;
        cin >> a >> b >> c;
        if((a+b)>=10) cout << "YES" << endl;
        else if((a+c)>=10) cout << "YES" << endl;
        else if((b+c)>=10) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}