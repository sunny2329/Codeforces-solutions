#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int * ar = new int[n];
        int ans = 0,i=0;
        int m = n;
        while(n--){
            int a,b;
            cin >> a >> b;
            ar[i] = b;
            if(a<=10){
                ans = max(ans,b);
                
            }
            i++;
        
    }
    // cout << ans << endl;
    for(int i = 0;i<m;i++){
     if(ar[i]==ans) cout << i+1 << endl;
    }
}
}