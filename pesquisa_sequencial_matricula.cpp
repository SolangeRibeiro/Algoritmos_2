#include <iostream>
#include <cstring>
using namespace std;

struct alunos {  //struct para armazenar dados 
    int mat;
    string nome;
    string curso;
};

int main() {
    int n;
    string consulta;
    bool achou = false;
    
    cin >> n;  // Quantidade de alunos
    cin.ignore();  // Limpar o buffer do cin

    struct alunos aluno[n];  // Vetor de structs para armazenar os dados dos alunos

    // Leitura dos dados dos alunos
    for (int i = 0; i < n; i++) {
        getline(cin, aluno[i].nome);   
        getline(cin, aluno[i].curso);  
        cin >> aluno[i].mat;           
        cin.ignore();    // Limpar o buffer apos o int
    }
    
    getline(cin, consulta);  // Nome do aluno a ser consultado

    // Pesquisa sequencial para encontrar o aluno
    for (int i = 0; i < n; i++) {
        if (aluno[i].nome == consulta) {
            cout << aluno[i].nome << endl;
            cout << aluno[i].curso << endl;
            cout << aluno[i].mat << endl;
            achou = true;
        }
    }

    // Se caso nao encontrar o aluno
    if (!achou) {
        cout << "Aluno nao localizado" << endl;
    }

    return 0;
}
