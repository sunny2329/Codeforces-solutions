#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        int *a = new int[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
       long long  int c = 0;
       long long int ans = 0;
        for (int i = 0; i <n; i++)
        {
           if(a[i]==1) c = 0;
           else{
            c++;
            ans = max(ans,c);
           }
               
            
        }

        cout << ans << endl;
    }
}