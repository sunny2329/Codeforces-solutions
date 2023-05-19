// sobhit sinha
#include <iostream>
#include <cstdio>
#include <string>
#include <utility>
#include <cstring>
#include <string.h>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
	int n;
    cin >> n;
    while(n--){
        int k;
         int c = 0;
        cin >> k;
        string s;
        cin >> s;
        string a[k-1];
        for (int i = 0; i < k-1; i++)
        {
            
            a[i] = s.substr(i,2);
          
            
            
        }
          int sname = sizeof(a)/sizeof(string);
            sort(a,a+sname);
        for (int i = 0; i < k-2; i++)
        {
            if(a[i]==a[i+1]) c++;
        }
        
        cout << k-1-c << endl;
        
        
        
    }
}