#include <iostream>
#include <string>

using namespace std;

int main()
{
    int a;
    cin >> a;
    while(a>0){
        string first, second;
        cin >> first >> second;
        int l = first.length();
        if (first.length()>second.length())l = second.length();
        string wynik;
        for(int i = 0; i < l; i++){
            wynik += first[i];
            wynik += second[i];
        }
        a--;
        cout << wynik << endl;
    }
}
