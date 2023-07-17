#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int *a = new int[n];

        for(int i=0;i<n;i++){
            cin  >> a[i];
        }

        sort(a,a+n);
        int c = 1;
        int ans = -1;
        for(int i = 0;i<n-1;i++){
         if(a[i]==a[i+1]){
            c++;
            if(c==3){
                ans = a[i];
                break;
            }
         }else{
            c = 1;
         }
        }
        cout << ans << endl;
    }

}
