#include<iostream>
using namespace std;

int comb(int n, int k) { //funçao comb 
    if(k == 1) {   //condiçoes para a recursividade
        return n;
    }
    else if (k == n) {
        return 1;
    }
    else 
    return comb(n-1, k-1) + comb(n-1,k);
}

int main () {
    int n2, k2;  //declarando as variaveis da main
    
    cin >> n2 >> k2;  //entrando com os valores de n e k
    
    cout << comb(n2,k2)<< endl;  //imprimindo os resultados
    
    return 0;
}
