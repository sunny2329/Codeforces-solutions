
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long int n,k;
        cin >> n >> k;
        int a[n];

        for (int i = 1; i <= n; i++) a[i]=0;
       a[1]=1;
       for(int i=2;i<= n;++i)
       if(i%k==1) a[i]=1;
       a[n]=1;
       int sum=1;
       for (int j = 2, i=n-1;i>=1;i--, j++)
       {
        sum+=a[i];
        if(sum<(j-1)/k+1) a[i]=1,sum++;
       }
       int ans =0;
       for(int i=1;i<=n;++i)
       ans+=a[i];
       cout << ans << endl;
       
        
        
    }
}