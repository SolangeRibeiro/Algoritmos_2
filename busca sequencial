#include <iostream>
#include <cstring>
using namespace std;

struct dado
{
    string nome;
    string isbn;
};

int sequencial(dado vetor[], int tamanho, string x)
{
    bool achou = false; // var aux p/ busca
    int i = 0; // contador
    while (achou == false && i < tamanho)
    {
	    if (vetor[i].nome == x)
            achou = true;
	    i++;
    }
    if (achou == true)
	    return (i - 1);
    else
	    return -1;
}

int main()
{
    dado livros[20]; // armazena as informações dos livros
    string nome; // var aux para leitura dos nomes dos livros
    string procurado; // nome do livro a ser procurado
    int i; // contador
    int nLivros; // quantidade de livros cadastrados
    int pos; // posicao onde procurado foi encontrado, -1 se não for
    
    // Lendo livros e armazenando-os no vetor
    i = 0;
    getline(cin >> ws, nome); //cin >> ws funciona como um cin.ignore() 
    while (nome != "fim")
    {
        livros[i].nome = nome;
        getline(cin >> ws, livros[i].isbn);
        i++;
        getline(cin >> ws, nome);
    }
    nLivros = i;
    
    // Lendo nome do livro a ser procurado
    getline(cin >> ws, procurado);
    
    // Porcurando pelo livro no vetor
    pos = sequencial(livros, nLivros, procurado);
    
    // Apresentando resultado
    if (pos == -1)
        cout << "Livro nao encontrado" << endl;
    else
        cout << livros[pos].isbn << endl;
    
    return 0;
}
