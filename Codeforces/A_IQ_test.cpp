#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n;
  cin >> n;
  int* a = new int[n];

  for(int i = 0;i<n;i++){
    cin >> a[i];
  }
    int e = 0;
    int o = 0;
  for(int i=0;i<n;i++){
    if(a[i]%2==0) e++;
    else o++;
  }
  if(e>o){
    for(int i=0;i<n;i++){
        if(a[i]%2!=0) {
            cout << i+1;
            break;
        }
    }
  }else{
    for(int i=0;i<n;i++){
        if(a[i]%2==0) {
            cout << i+1;
            break;
        }
    }
  }
 
  



}