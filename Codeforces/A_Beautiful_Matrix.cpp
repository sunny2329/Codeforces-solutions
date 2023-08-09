#include <cmath>
#include <iostream>
using namespace std;

int main()
{
    int r,c;
    int a[5][5];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> a[i][j];
            if(a[i][j]==1){
                r=i;
                c=j;
            }
        }
        
    }
    int ans = abs(3-r-1) + abs(3-c-1);
    cout << ans;
    
    
}