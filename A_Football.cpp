#include <bits/stdc++.h>
using namespace std;
int main()

{
    int n;
    cin >> n;

    string *a = new string[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }


    sort(a,a+n);

    int c = 1;
    for(int i = 0;i<n;i++){
        if(a[i]==a[i+1]) c++;
        else break;
    }

    if(c>(n/2)) cout << a[0];
    else cout << a[n-1];
}