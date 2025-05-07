#include <iostream>
using namespace std;

int main() {
    int vetor[10000]; //vetor com o maximo das posiçoes dadas na descriçao
    int n, x, i, pos;
    bool achou = false;

    cin >> n;   //quantidade de alunos

    for (i = 0; i < n; i++) {
        cin >> vetor[i]; //entrando com as matriculas e alocando no vetor
    }

    // entra com o numero da matricula
    cin >> x;

    // Pesquisa sequencial para encontrar a matricula
    for (int j = 0; j < i; j++) {  // i é o número de elementos no vetor
        if (vetor[j] == x) {
            achou = true;
            pos = j; 
        }
    }

    // Exibe o resultado
    if (achou) {
        cout << "Corredor " << pos << endl;
    } else {
        cout << "Nao localizado" << endl;
    }

    return 0;
}
