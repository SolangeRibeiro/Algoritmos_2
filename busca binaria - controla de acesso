#include <iostream>
using namespace std;

int binaria(int vetor[], int tamanho, int x)  //funçao da busca binaria
{
    bool achou;
    int baixo, meio, alto;
    baixo = 0;
    alto = tamanho - 1;
    achou = false;

    while ((baixo <= alto) && !achou) 
    {
        meio = (baixo + alto) / 2; 
        if (x < vetor[meio])
            alto = meio - 1;
        else
        {
            if (x > vetor[meio])
                baixo = meio + 1;
            else
            {
                achou = true;
            }
        }
    }
    if (achou)
        return meio;
    else
    {
        return -1;
    }
}

int main()
{
    int vetor[20];
    int id, i = 0, x;

    // Leitura do vetor até encontrar -1
    	cin >> x;
	while (x != -1)
	{
		vetor[i] = x;
		i++;
		cin >> x;
	}

    cin >> id;   //entrando com o numero a ser encontrado 

    // Verificação de acesso com busca binária
    if (binaria(vetor, i, id) != -1)  //fazendo a validação puxando a funçao binaria
    {
        cout << "Possui acesso" << endl;
    }
    else
    {
        cout << "Nao possui acesso" << endl;
    }

    return 0;
}
