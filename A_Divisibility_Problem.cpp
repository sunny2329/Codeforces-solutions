#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  while(n--){
    int a,b;
    cin >> a >> b;
    int r = a%b;
    int an = b-r;
    if(r==0) cout << 0 << endl;

   else  cout << an << endl;
  }
}