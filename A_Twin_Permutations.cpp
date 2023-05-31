#include <bits/stdc++.h>
using namespace std;
// Sobhit sinha 
// 21uec128

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];

        for (int  i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cout << n-a[i]+1 << " ";
        }
        cout << endl;
        
        
    }
}