#include <iostream>
#include <vector>

using namespace std;

void dwie_cyfry_silnia(int a){
   if(a >= 10 ) cout << 0 << " " << 0 << endl;
   else if (a == 0) cout << 0 << " " << 1 << endl;
        else{
            int wynik = 1;
            for(int i = 1; i <= a; i++){
                wynik *= i;
            }
            wynik %= 100;
            int w_1 = 0;
            while(wynik >= 10){
                wynik -= 10; w_1++;
            }
            cout << w_1 << " " << wynik << endl;
        }
}

int main()
{
    int a;
    vector < int > b;
    cin >> a;
        for(int i = 0; i < a; i++){
        int temp; cin >> temp; b.push_back(temp);
        }
        for(int i = 0; i < a; i++){
        dwie_cyfry_silnia(b[i]);
        }
}
