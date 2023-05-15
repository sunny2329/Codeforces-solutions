#include <iostream>
using namespace std;
int main(){
   int n,k;
   cin >> n >> k;
   int a[n];
   for (int i = 0; i < n; i++)
   {
    cin >> a[i];
   }
   int d = 0;
   for (int  i = 0; i < n; i++)
   {
    if(a[i]>0){
        if(a[i]>=a[k-1]) d++;
    }
   }
   cout << d;
}