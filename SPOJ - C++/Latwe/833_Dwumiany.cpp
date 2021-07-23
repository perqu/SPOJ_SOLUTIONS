#include <iostream>

using namespace std;

unsigned long long dwumiany(int n, int k){

    unsigned long long temp = 1;
    int dzielnik = 1;
    if(k > n-k){
        for(int i = n; i > k;){
            if(temp > 10000000000){
                temp /= dzielnik;
                dzielnik++;
            }
            else {temp *= i; i--;}
        }
        for(int i = dzielnik; i <= n-k; i++)temp /= i;
    }
    else{
        for(int i = n; i > (n-k);){
            if(temp > 10000000000){
                temp /= dzielnik;
                dzielnik++;
            }
            else {temp *= i; i--;}
        }
        for(int i = dzielnik; i <= k; i++)temp /= i;
    }
    return temp;
}

int main()
{

    int x, n, k;
    cin >> x;
    for(int i = 0; i < x; i++){
        cin >> n >> k;
        cout << dwumiany(n,k) << endl;
    }
}

