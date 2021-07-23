#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int> v;
    int a, b;
    cin >> a;
    for(int i = 0; i < a; i++){
        cin >> b;
        for(int j = 0; j < b; j++){
            int temp;
            cin >> temp;
            v.push_back(temp);
        }
        int pierwsza = v[0];
        for(int j = 0; j < b; j++){
            if(j >= (b-1)) v[j] = pierwsza;
            else v[j] = v[j+1];
        }
        for(int j = 0; j < b; j++) cout << v[j] << " ";
        v.clear();
    }
    return 0;
}

