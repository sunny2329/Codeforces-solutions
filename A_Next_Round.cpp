#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        if(a[i]>0){
            if(a[i]>=a[k-1]) c++;
        }
    }
    cout << c;
  

}