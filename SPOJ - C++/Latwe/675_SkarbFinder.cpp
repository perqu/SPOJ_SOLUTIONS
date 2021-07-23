#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cin >> a;
    for(int i = 0; i < a; i++){
        cin >> b;
        int pion = 0;
        int poziom = 0;
        for(int j = 0; j < b; j++){
            int steps;
            int direction;
            cin >> direction >> steps;
            if(direction == 0)pion += steps;
            else if(direction == 1)pion -= steps;
            else if(direction == 2)poziom += steps;
            else if(direction == 3)poziom -= steps;
        }
        if(pion == 0 && poziom == 0) cout << "studnia" << endl;
        if(pion > 0){cout << 0 << " " << pion << endl;}
        else if(pion < 0){cout << 1 << " " << pion/(-1) << endl;}
        if(poziom > 0){cout << 2 << " " << poziom << endl;}
        else if(poziom < 0){cout << 3 << " " << poziom/(-1) << endl;}
    }

    return 0;
}
