#include<iostream>
#include<iomanip>
using namespace std;

void bubbleSort(float vetor[], int tamanho){
    int i, j; // contadores
    float trab;  //trab como float para armazenar os valores de ponto flutuante
    bool troca;
    int limite;
    troca = true;
    limite = tamanho - 1;
    while (troca)
    {
        troca = false;
        for (i = 0; i < limite; i++)
            if (vetor[i] < vetor[i + 1]) //altera o sinal para sair em ordem decrescente
            {
                trab = vetor[i];
                vetor[i] = vetor[i + 1];
                vetor[i + 1] = trab;
                j = i;
                troca = true;
            }
        limite = j;
    }
}

int main () 
{
    float vetor[1000]; //declarando o vetor como 1000 pois nao tem uma quantidade exata de posiçoes e sim uma condiçao de parada entao defini um numero grande 
    float num;
    int i=0, j;  //contadores
    
    cin >> num;  //entrando com o primeiro numero 
    while(num != -1) //fazendo a validação, se o numero for -1 ele nao entra no vetor
    {
        vetor[i] = num;
        i++;
        cin >> num;
    }

    bubbleSort(vetor,i);  //chamando a função
    
    for(j = 0; j < i; j++) //estrutura de repetição para varrer o vetor e mostrar a resposta
    {
        cout << vetor[j] << " ";  //imprimindo a resposta
    }
    
    return 0;
}
