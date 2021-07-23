#include <iostream>

using namespace std;
bool czy_pierwsza(int a){
    if(a < 2)return false;
    for(int i = 2; i*i<=a; i++){
        if(a % i == 0)return false;
    }
return true;
}

int main()
{
   int a,b;
   cin >> b;
   for(int i = 0; i < b; i++){
    cin >> a;
   if(czy_pierwsza(a) == 1) cout << "TAK" << endl;
   else cout << "NIE" << endl;
   }
}
