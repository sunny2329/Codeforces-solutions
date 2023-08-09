
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;
   
    for (int i = n+1; i <= 9015; i++)
    {
        int c = 0;
         string s = to_string(i);
         for (int j = 0; j < 3; j++)
         {
            sort(s.begin(),s.end());
            if(s[j]!=s[j+1]){
                c++;
            }
         }
         if(c==3) {
            cout << i;
            break;
         }
         
    }
    
}