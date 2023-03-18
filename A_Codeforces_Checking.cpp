#include <iostream>
using namespace std;

int main(){
  int n;
  cin >> n;
  while(n--){
    char c;
    cin >> c;
    if((c=='c')||(c=='o')||(c=='d')||(c=='e')||(c=='f')||(c=='o')||(c=='r')||(c=='e')||(c=='s')){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
  }
}