#include <bits/stdc++.h>
using namespace std;



int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int* a = new int[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a,a+n);
        int c = n/2;
        int ans = 0;
        for (int i = 0; i < c; i++)
        {
            ans = a[n-i-1]-a[i] + ans;
        }
        cout << ans << endl;
        
        

    }
}