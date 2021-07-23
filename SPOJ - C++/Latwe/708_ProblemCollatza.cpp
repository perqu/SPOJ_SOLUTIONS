#include <iostream>

using namespace std;

int check_collatz(int a){
    int licznik = 0;
    while(a != 1){
        if(a%2==0){
            a = a/2;
        }
        else if(a%2!=0){
            a = 3*a+1;
        }
    licznik++;
    }
    return licznik;
};

int main()
{
    int a,b;
    cin >> a;
    for(int i = 0; i < a; i++){
        cin >> b;
        cout << check_collatz(b) << endl;
    }
}
