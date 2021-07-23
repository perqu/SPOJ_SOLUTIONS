#include <iostream>

using namespace std;

int main()
{
    int x;
    cin >> x;
    for(int i = 0; i < x; i++){
        int a,b;
        cin >> a >> b;
        while(a > b || b > a){
            if(a > b) a -= b;
            else if(b > a) b -= a;
        }
        cout << b+a << endl;
    }
    return 0;
}

