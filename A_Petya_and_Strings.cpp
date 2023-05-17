#include <cmath>
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
   string a;
   string b;
   int f = 0;
   cin >> a;
   cin >> b;
   transform(a.begin(),a.end(),a.begin(), ::tolower);
   transform(b.begin(),b.end(),b.begin(), ::tolower);
   int r = a.length();
   for (int  i = 0; i < r; i++)
   {
    if(a[i]<b[i]) {
        f = -1;
        break;
    }
    if(a[i]>b[i]){
        f = 1;
        break;
    }
   }
   cout << f ;
   
   
}