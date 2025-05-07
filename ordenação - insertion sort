#include <iostream>

using namespace std;

void insertionSort(int vetor[], int tamanho)
{
	int i, j;
	int chave;

	for (j = 1; j < tamanho; j++)
	{
		chave = vetor[j];
		i = j - 1;
		while ((i >= 0) && (vetor[i] < chave))
		{
			vetor[i + 1] = vetor[i];
			i = i - 1;
		}
		vetor[i + 1] = chave;
	}
}

int main()
{
	int i = 0, x;
	int vetor[1000];
	int tamanho;

	cin >> x;
	while (x != 0)
	{
		vetor[i] = x;
		i++;
		cin >> x;
	}

	tamanho = i;

	insertionSort(vetor, tamanho);


	for (int i = 0; i < tamanho; i++)
	{
		cout << vetor[i] << " ";
	}
	cout << endl;

	return 0;
}
