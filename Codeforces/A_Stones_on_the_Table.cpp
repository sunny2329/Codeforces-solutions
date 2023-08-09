#include <iostream>
#include <algorithm>
#include <vector>
#include <cctype>
using namespace std;

int main() {
        int n;
        int c=0;
        cin >> n;
        char a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            if(a[i]==a[i+1]) c++;
        }
        cout << c;
        
        
        
}