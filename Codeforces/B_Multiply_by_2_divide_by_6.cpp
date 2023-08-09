#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t; 
    cin >> t;

    while(t--){
        long long int n; 
        cin >> n;

        if(n==1){
            cout << 0 << endl;
            continue;
        }
        int ans = 0;
        while(n<INT_MAX){
            if(n%6==0) n= n/6;
            else{
                n = n*2;
            }
            if(n==1) break;
            ans++;
        }

        if(n==1) cout << ans+1 << endl;
        else cout << -1 << endl;




    }
}