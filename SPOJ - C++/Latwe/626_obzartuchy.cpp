#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t; //wczytaj liczbê testów
    while(t){

        int ile_grubasow, pudelko, ile_ciastek = 0;
        cin >> ile_grubasow >> pudelko;

        while(ile_grubasow){
            int temp; cin >> temp;
            ile_ciastek += (86400 / temp);
            ile_grubasow--;
        }
        if(ile_ciastek % pudelko == 0)cout << (ile_ciastek/pudelko) << endl;
        else cout << (ile_ciastek/pudelko)+1 << endl;
        t--;
    }
return 0;
}
