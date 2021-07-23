#include <iostream>
#include <vector>
using namespace std;

int potegowanie(int a, int b){
    if(b % 4 == 0)b = 4;
    else b %= 4;
    if(a % 10 == 0)a = 10;
    else a %= 10;

    int wynik = 1;
    for(int i = 0; i < b; i++){
        wynik *= a;
        wynik %= 10;
    }
return wynik;
}

int main()
{
    vector<int> w, p;
    int a,b,c;
    cin >> c;
    for(int i = 0; i < c; i++){
    cin >> a >> b;
    p.push_back(a);
    w.push_back(b);
    }
    for(int i = 0; i < c; i++){
    cout << potegowanie(p[i],w[i]) << endl;
    }
}
