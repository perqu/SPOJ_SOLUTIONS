#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

struct point{
    int x;
    int y;
    float distance;
    string n;
};

bool cmpd(point A,point B)
{
        return A.distance < B.distance;
};

int main()
{
    point t[10000];

    int a, b;

    cin >> a;
    for(int j = 0; j < a; j++){
        cin >> b;

        for(int i = 0; i < b; i++){
            string nazwa; int x; int y;
            cin >> nazwa >> x >> y;
            t[i].n = nazwa;
            t[i].x = x;
            t[i].y = y;
            t[i].distance = sqrt(x*x+y*y);
        }
        sort (t,t+b,cmpd);
        for(int i = 0; i < b; i++){
            cout << t[i].n << " " << t[i].x << " " << t[i].y << endl;
        }
        cout << endl;
    }
    system("pause");
return 0;
}
