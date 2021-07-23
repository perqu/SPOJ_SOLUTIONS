#include <iostream>

using namespace std;



int main()
{
    int a,b,c;
    cin >> c;
    for(int i = 0; i < c; i++){
        cin >> a >> b;
        if(a == b)cout << a << endl;
        else{
             int iloczyn = a * b;
            do
            {
                if(a > b) a = a - b;
                else b = b - a;
            }
            while(a != b);
            cout << iloczyn/a << endl;
        }
    }
}
