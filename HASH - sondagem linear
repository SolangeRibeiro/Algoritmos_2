#include <iostream>
using namespace std;

// Função hash auxiliar (método da divisão)
int hash_aux(int k, int m) {
    int result = k % m;
    if (result < 0)
        result = result + m;
    return result;
} //*

// Função da sondagem linear 
int hash1(int k, int i, int m) {
    return (hash_aux(k, m) + i) % m;
} //*

int main() {
    int k2, m2;

    cin >> k2 >> m2; //entrando com os valores

    for (int i = 0; i < m2; i++) {
        cout << hash1(k2, i, m2) << " "; //mostrando as posiçoes da sondagem
    }

    return 0;
}
