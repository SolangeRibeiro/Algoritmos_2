#include<iostream> 
#include<cmath>  //biblioteca para usar o round
using namespace std;

void quickSort(int vetor[], int i, int j) {
    int trab, esq, dir, pivo;

    esq = i;
    dir = j;
    pivo = vetor[(int)round((esq + dir) / 2.0)];

    do {
        while (vetor[esq] < pivo)
            esq++;
        while (vetor[dir] > pivo)
            dir--;
        if (esq <= dir) {
            trab = vetor[esq];
            vetor[esq] = vetor[dir];
            vetor[dir] = trab;
            esq++;
            dir--;
        }
    } while (esq <= dir);

    if (dir - i >= 0)
        quickSort(vetor, i, dir);
    if (j - esq >= 0)
        quickSort(vetor, esq, j);
}

int main () {
    int vetor[1000]; //vetor para os numeros(como sao varios numeros e não tem um limite coloquei um numero grande)
    int i = 0, j, x; //declarando as variaveis da main

    // Leitura do vetor até encontrar -1
    	cin >> x;
	while (x != -1)
	{
		vetor[i] = x; 
		i++;
		cin >> x;
	}
	
    quickSort(vetor, 0, i-1); //chamando a função (0 é a posição inicial e o i-1 é a posição de parada pq na validação do while ele para quando x = -1 então o i incrementa toda vez que retorna como ele retorna sempre uma vez a meis então ele fica i-1)
    
    for(j=0; j < i; j++){   //varrendo o vetor para imprimir as respostas
        cout << vetor[j] << " ";   
    }
    

    return 0;
}
