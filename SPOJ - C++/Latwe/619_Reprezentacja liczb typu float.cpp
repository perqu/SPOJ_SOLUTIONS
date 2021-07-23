#include <iostream>

using namespace std;

union Repr {
  float f;
  char b[sizeof(float)];
};

void printfloat(float x){
    Repr rep;
    rep.f = x;
    printf("%x %x %x %x \n", rep.b[3] & 0xff, rep.b[2] & 0xff, rep.b[1] & 0xff, rep.b[0] & 0xff);
};

int main()
{
    int t;
    float x;
    cin >> t; /* wczytaj liczbê testów */
    while(t){
        cin >> x;
        printfloat(x);
        t--;
    }
}
