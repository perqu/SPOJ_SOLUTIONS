#include <iostream>

using namespace std;

 int nwd(int a, int b){
    while(a%b!=0){
        int c = a;
        a = b;
        b = c%b;
    }
    return b;
 }

int main()
{
    int a,b,c;
    cin >> c;
    for(int i = 0; i < c; i++){
        cin >> a >> b;
        cout << nwd(a,b) << endl;
    }
    return 0;
}
