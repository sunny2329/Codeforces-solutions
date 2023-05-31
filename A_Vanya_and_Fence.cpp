
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n,k;
    cin >> n >> k;
    int c =0;
    while(n--){
        int r;
        cin >> r;
        if(r>k) c = c+2;
        else c++;
    }
    cout << c;
}