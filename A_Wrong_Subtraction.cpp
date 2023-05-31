#include <cmath>
#include <iostream>
using namespace std;

int main()
{
   long long int n,k;
    cin >> n >> k;
    while(k--){
        int r = n%10;
        if(r!=0) n = n-1;
        else n = n/10;
    }
    cout << n;
}