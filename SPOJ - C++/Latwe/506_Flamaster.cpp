#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
        vector <int> ile;
        vector <char> znaki;
        vector <char> wynik;
        int a;
        cin >> a;
        for(int i = 0; i < a; i++){
            string temp;
            cin >> temp;
            for(int j = 0; j < temp.length(); j++){
                if(znaki.size() == 0){
                    znaki.push_back(temp[j]);
                    ile.push_back(1);
                }
                else{
                    if(znaki[znaki.size()-1] == temp[j]){
                    ile[znaki.size()-1] += 1;
                    }
                    else{
                    znaki.push_back(temp[j]);
                    ile.push_back(1);
                    }
                }
            }
            for(int i = 0; i < znaki.size(); i++){
                if(ile[i] > 2){
                    wynik.push_back(znaki[i]);
                    if(ile[i] > 9){
                        if(ile[i] > 199)wynik.push_back(2 + '0');
                        else if (ile[i] > 99)wynik.push_back(1 + '0');
                        int t = ile[i];
                        int j = t%10;
                        int d = (t%100-j)/10;
                        wynik.push_back(d + '0');
                        wynik.push_back(j + '0');
                    }
                    else wynik.push_back(ile[i]+'0');
                }
                else if(ile[i] == 2){
                    wynik.push_back(znaki[i]);
                    wynik.push_back(znaki[i]);
                }
                else{wynik.push_back(znaki[i]);}
            }
            for(int i = 0; i < wynik.size(); i++){
                cout << wynik[i];
            }
            cout << endl;
            ile.clear();
            znaki.clear();
            wynik.clear();
        }
}
//int s = t%1000 - ((10*d)/10) - j;
                        //wynik.push_back(s + '0');
