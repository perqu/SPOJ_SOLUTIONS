#include <iostream>

using namespace std;

int main()
{
    int b,c;
    cin >> c;
    for(int i = 0; i < c; i++){
        cin >> b;
        int temp = 0;
        for(int j = 0; j < b; j++){
            int a; cin >> a;
            temp += a;
        }
        cout << temp << endl;
    }
}
