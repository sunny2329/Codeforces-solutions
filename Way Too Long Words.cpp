#include <bits/stdc++.h>
/*
 By Sobhit Sinha

 */

#include <algorithm>
#include <math.h>
#include <cctype>
#include <cmath>
#include <string>
#include <iomanip>
using namespace std;


// reverse a string
void Reverse(string& sl){
    reverse(sl.begin(),sl.end());
}

// sum of an array
int suma(int ar[], int size){
    int sum=0;
    for (int i = 0; i < size; ++i)
    {
        sum += ar[i];
    }
    return sum;
}

// factorial
int factorial(int n){
    int fact=1;
    for (int i = 1; i <=n; ++i)
    {
        fact = fact*i;
    }
    return fact;
}

// to upper case
void upper(string& s){
    transform(s.begin(),s.end(),s.begin(), ::toupper);
}

// to lower case
void lower(string& s){
    transform(s.begin(),s.end(),s.begin(), ::tolower);
}
 
// checking prime number
bool isPrime(int n)
{
    // Corner case
    if (n <= 1)
        return false;
 
    // Check from 2 to n-1
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
 
    return true;
}

int main(){
#ifndef ONLINE_JUDGE
freopen("input4.txt","r",stdin);
freopen("output4.txt","w",stdout);
#endif 
int n;
cin >> n;
while(n--){
    string s;
    cin >> s;
    int i = s.length();
    if(i<=10) {
        cout << s << endl;
    }
    else cout << s[0] << i-2 << s[i-1] << endl;
}
}
