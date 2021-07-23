#include <iostream>
#include <vector>

using namespace std;

 vector<int> odwroc_tablice(vector <int> v){
    vector <int> temp;
    for(int i = v.size(); i > 0; i--){
        temp.push_back(v[i-1]);
    }
    return temp;
}

int main()
{
    int a,b;
    cin >> a;
    for(int i = 0; i < a; i++){
        vector <int> v;
        cin >> b;
        for(int j = 0; j < b; j++){
            int temp; cin >> temp;
            v.push_back(temp);
        }
        v = odwroc_tablice(v);
        for(int j = 0; j < v.size(); j++){
            cout << v[j] << " ";
        }
        cout << endl;
    }
}
