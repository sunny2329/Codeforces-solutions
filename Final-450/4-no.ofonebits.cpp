#include <bits/stdc++.h>
using namespace std;

int setbits(int n){
    int ans = 0;
    while(n!=0){
        int bit = n&1;
        if(bit==1) ans++;
        n = n>>1;
    }
    return ans;
}

int main()
{
}