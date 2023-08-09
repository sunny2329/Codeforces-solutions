#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n,k,c=1;
        cin >> n >> k;
        if(n%k!=0) {
            cout << 1 << endl;
            cout << n << endl;
        }
        else{
        for (int i = n-1; i >0; i--)
        {
            cout << 2 << endl;
            if(i%k==0) continue;
            else{
                cout << i << " " << n-i << endl;
                break;
            }
     
        }
        }
        
    }
    
   
}