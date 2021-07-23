#include <iostream>
#include <iomanip>
#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;

int main()
{
    double r, d;
    cin >> r >> d;
    cout << fixed << setprecision(2) << M_PI*(r*r-(d*d/4)) << endl;//setprecision(2)
}
