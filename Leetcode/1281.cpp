
#include <bits/stdc++.h>
using namespace std;

int subtractproductandsum(int n){
    int p = 1, s = 0;
    while(n!=0){
        int r = n%10;
        p = p*r;
        s += r;
        n = n/10;
    }
    return p-s;
}

int main()
{
    cout << subtractproductandsum(234);
}