#include <iostream>
#include <algorithm>
#include <vector>
#include <cctype>
using namespace std;

int main() {
       int a,b;
       int c = 0;
       cin >> a >> b;
       while(a<=b){
            a = 3*a;
            b = 2*b;
            c++;
       }
       cout << c;
}