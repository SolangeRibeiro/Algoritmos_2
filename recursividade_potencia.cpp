#include<iostream>
using namespace std;

int potencia(int num, int p) {
    if (p == 0) {
        return 1;
    }
    else {
        return num * potencia(num, p-1);
    }
}

int main () {
    int a, n, resp;
    
    cin >> a >> n;
    resp = potencia(a, n);
    
    cout << resp;
    
    return 0;
}
