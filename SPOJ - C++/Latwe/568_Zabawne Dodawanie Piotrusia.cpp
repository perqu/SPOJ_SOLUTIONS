#include <iostream>
#include <vector>

using namespace std;

int odwrotnosc_liczby(int a){
    int wynik = 0;
    int a_c = a;
    int m = 1;
    while(a_c > 0){
        a_c = a;
        a_c -= (10 * m - 1);
        m *= 10;
    }
    vector <int> cyfry;
    int licznik = 0;
    for(int i = 10; i <= m; i*= 10){
        if(i==10){cyfry.push_back(a%i);}
        else {
            a_c = ((a%i) - cyfry[licznik - 1])/(i/10);
            cyfry.push_back(a_c);
        }
        licznik++;
    }

    for(int i = cyfry.size(), mnoznik = 1; i > 0; i--, mnoznik *= 10){
        wynik += (mnoznik*cyfry[i-1]);
    }

return wynik;
}

int main()
{
    int a,c;
    cin >> c;
    for(int i = 0; i < c; i++){
        cin >> a;
        if(a < 10){
            cout << a << " " << 0 << endl;
        }
        else{
            int i = 0;
            while(a != odwrotnosc_liczby(a)){
                int temp = odwrotnosc_liczby(a);
                a += temp;
                i++;
            }
            cout << a << " " << i << endl;
        }
    }
}
