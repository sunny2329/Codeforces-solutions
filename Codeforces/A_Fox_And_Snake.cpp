#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    bool l = true;
    cin >> n >> m;
    int i = 0;
    while (i < n)
    {
        int j = 0;
        if (i % 2 == 0)
        {
            while (j < m)
            {
                cout << "#";
                j++;
            }
        }
        else{
             
            if(l){
            while(j<m-1){
                cout << ".";
                j++;
            }
            cout << "#";
            }else{
                cout << "#";
                j = 1;
                while(j<m){
                    cout << ".";
                    j++;
                }
                
            }
             l = !l;
        }
        

        cout << endl;
        i++;
    }
   
}