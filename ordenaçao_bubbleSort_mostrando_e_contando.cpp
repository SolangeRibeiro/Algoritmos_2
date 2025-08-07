#include<iostream>
using namespace std;

void bubbleSort(int vetor[], int tamanho)
{
	bool trocou;
	int cont = 0;
	for (int i = 0; i < tamanho - 1; i++)
	{
		trocou = false;

		for (int j = 0; j < tamanho - i - 1; j++)
		{
			// Se o elemento atual for maior que o próximo eles vao trocar de lugar
			if (vetor[j] > vetor[j + 1])
			{
				int trab = vetor[j];
				cout << "New trab:" << trab << endl;  //imprimindo a resposta do novo trab
				
				vetor[j] = vetor[j + 1];
				vetor[j + 1] = trab;
				trocou = true;
				cont ++;
			}
		}

		// Se não tiver troca, o vetor já está ordenado
		if (!trocou)
			break;
	}
	cout << "Contador:" << cont; //imprimindo a quantidade de vezes que trab recebeu um valor
}

int main()
{

	int trab;  //var. aux. de troca
	int vetor[99];  //vetor p/ receber valores
	int tamanho;  //tamanho do vetor  
	int i;  
	
	do
	{
		cin >> tamanho;  //entrando com o tamanho do vetor
	}
	while(tamanho < 1);  //tamanho do vetor tem que ser maior ou igual a 1 para rodar no bubble
	
	for(i = 0; i < tamanho; i++)  
	{
		cin >> vetor[i];  //entrando com os valores 
	}
	
	bubbleSort(vetor, tamanho);  //puxando a funçao
	
	return 0;
}
