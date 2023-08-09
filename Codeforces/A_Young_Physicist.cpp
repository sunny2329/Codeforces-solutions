#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int n;
    vector<int>  x,y,z;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a,b,c;
        cin >> a >> b >> c;
        x.push_back(a);
        y.push_back(b);
        z.push_back(c);

    }
    int sum1=0,sum2=0,sum3=0;
    for (int i = 0; i < x.size() ; i++)
    {
        sum1 += x[i];
    }
      for (int i = 0; i < y.size() ; i++)
    {
        sum2 += y[i];
    }
      for (int i = 0; i < z.size() ; i++)
    {
        sum3 += z[i];
    }

    if((sum1==0)&&(sum2==0)&&(sum3==0)) cout << "YES";
    else cout << "NO";
}