#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector < vector<int> > v;
    int a;
    cin >> a;
    for(int i = 0; i < a; i++){
        int b;
        cin >> b;
        vector <int> temp_v;
        for(int j = 0; j < b; j++){
            int temp;
            cin >> temp;
            temp_v.push_back(temp);
        }
        v.push_back(temp_v);
    }

    for(int i = 0; i < a; i++){
        int b = v[i].size();
        int wynik = 0;
        for(int j = 0; j < b; j++){
            wynik += v[i][j];
        }
        cout << wynik << endl;
    }
}
