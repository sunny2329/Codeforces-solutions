#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,d=0;
  cin >> n;
  while(n--){
    int a,b,c;
    cin >> a >> b >> c;
    int r = a+b+c;
    if(r>=2) d++;
    
  }
  cout << d;
}