#include <iostream>
#include <math.h>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int fact(int n);
 
int nCr(int n, int r)
{
    return fact(n) / (fact(r) * fact(n - r));
}
 

int fact(int n)
{
      if(n==0)
      return 1;
    int res = 1;
    for (int i = 2; i <= n; i++)
        res = res * i;
    return res;
}

int main(){
        int t;
        cin >> t;
        while(t--){
            int n,k;
            cin >> n>> k;
            if(log2(n)<k) cout << n+1 << endl;
            else cout << int(pow(2,k)) << endl;
        }
        
          

}