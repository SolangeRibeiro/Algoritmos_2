#include <iostream>
using namespace std;

//hash sempre vai ser O(1)
//Funçao de hash usando o metodo da divisao 
int hash_aux(int k, int m) {
    int result = k % m;
    
    if (result < 0)
        result = result + m; //se o valor for negativo (menor que 0) entao soma mais m ao resultado
    
    return result;  //retornando o resultado
}

int main() {
    int k2, m2; 
    
     cin >> k2 >> m2;  //entrando com os valores de K e M
    while (k2 != 0 && m2 != 0) {
        
        cout << hash_aux(k2, m2) << endl; // imprimindo os resultados da função
        cin >> k2 >> m2;  //entrando com os valores de K e M
        
    }

    return 0;
}
