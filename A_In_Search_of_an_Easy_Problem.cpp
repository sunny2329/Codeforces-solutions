#include <cmath>
#include <iostream>
using namespace std;

int main()
{
    long long int n;
    bool f = true;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if(a[i]==1){
         f = true;
         break;
        } 
        else f = false;
    }
    if(f) cout << "HARD";
    else cout << "EASY";
    // for (int  i = 0; i < ; i++)
    // {
    //     /* code */
    // }
    
}