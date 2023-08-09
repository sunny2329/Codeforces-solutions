
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    string s,h="hello";
    cin >> s;
    int j=0,p=0;
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i]==h[j]){
            j++;
            p++;
        }
    }
    if(p==5) cout << "YES";
    else cout << "NO";
    
    
}