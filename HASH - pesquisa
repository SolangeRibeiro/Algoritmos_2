#include <iostream>
using namespace std;

//armazenar uma posição da tabela hash
struct dados
{
	int k; // chave
	int status; // -1 = vazio, 1 = ocupado
};

// Função auxiliar hash (método da divisão) vai usar em todos os codigos hash
int hash_aux(int k, int m)
{
	int r = k % m;
	if (r < 0) r = r + m;
	return r;
}//*

// Função de sondagem linear
int hash1(int k, int i, int m)
{
	return (hash_aux(k, m) + i) % m;
} //*

// Função para inserir usando sondagem linear
int hash_insert(dados T[], int m, int k)
{
	int j, i = 0;

	do
	{
		j = hash1(k, i, m); //chamando a funçao da sondagem linear e renomeando para ficar mais facil

		if (T[j].status != 1)
		{
			T[j].k = k;
			T[j].status = 1;
			return j;
		}
		else
			i++;
	}
	while(i != m);

	return -1; // tabela cheia

} //*

int hash_search(dados T[], int m, int k) //funçao para pesquisa no hash
{
	int i = 0, j;
	do
	{
		j = hash1(k, i, m);  //chamando a sondagem linear e ronomeando
		if(T[j].k == k)
		{
			return j;
		}
		i++;
	}
	while(T[j].status != 0 && i < m);
	return -1;
} //*

int main()
{
	dados tabela[1000]; //tamanho do vetor igual a 100 pq nao deu um tamanho exato

	int m, chave, busca, pos;
	int i = 0;
	cin >> m; //entrando com o tamanho da tabela

	// inicia a tabela com status -1 (vazio)
	for (i = 0; i < m; i++)
	{
		tabela[i].k = -1;
		tabela[i].status = 0; //status = a 0 pq na descriçao esta que "T[j].status != 0"
	}

	cin >> chave; //lendo antes para validar

	while(chave != 0) //enquanto for verdadeiro
	{

		hash_insert(tabela, m, chave); //chamando a funçao
		cin >> chave; //entrando com a chave
	}

	cin >> busca;  //pesquisando o numero
	pos = hash_search(tabela, m, busca);  //renomeando a funçao para ficar mais facil

	if(pos != -1)  //se a funçao for diferente de -1 
	{
		cout << "Chave " << busca << " encontrada na posicao " << pos << endl;
	}
	else
	{
		cout << "Chave " << busca << " nao encontrada" << endl;
	}

	return 0;
}
#include <iostream>
using namespace std;

//armazenar uma posição da tabela hash
struct dados
{
	int k; // chave
	int status; // -1 = vazio, 1 = ocupado
};

// Função auxiliar hash (método da divisão) vai usar em todos os codigos hash
int hash_aux(int k, int m)
{
	int r = k % m;
	if (r < 0) r = r + m;
	return r;
}//*

// Função de sondagem linear
int hash1(int k, int i, int m)
{
	return (hash_aux(k, m) + i) % m;
} //*

// Função para inserir usando sondagem linear
int hash_insert(dados T[], int m, int k)
{
	int j, i = 0;

	do
	{
		j = hash1(k, i, m); //chamando a funçao da sondagem linear e renomeando para ficar mais facil

		if (T[j].status != 1)
		{
			T[j].k = k;
			T[j].status = 1;
			return j;
		}
		else
			i++;
	}
	while(i != m);

	return -1; // tabela cheia

} //*

int hash_search(dados T[], int m, int k) //funçao para pesquisa no hash
{
	int i = 0, j;
	do
	{
		j = hash1(k, i, m);  //chamando a sondagem linear e ronomeando
		if(T[j].k == k)
		{
			return j;
		}
		i++;
	}
	while(T[j].status != 0 && i < m);
	return -1;
} //*

int main()
{
	dados tabela[1000]; //tamanho do vetor igual a 100 pq nao deu um tamanho exato

	int m, chave, busca, pos;
	int i = 0;
	cin >> m; //entrando com o tamanho da tabela

	// inicia a tabela com status -1 (vazio)
	for (i = 0; i < m; i++)
	{
		tabela[i].k = -1;
		tabela[i].status = 0; //status = a 0 pq na descriçao esta que "T[j].status != 0"
	}

	cin >> chave; //lendo antes para validar

	while(chave != 0) //enquanto for verdadeiro
	{

		hash_insert(tabela, m, chave); //chamando a funçao
		cin >> chave; //entrando com a chave
	}

	cin >> busca;  //pesquisando o numero
	pos = hash_search(tabela, m, busca);  //renomeando a funçao para ficar mais facil

	if(pos != -1)  //se a funçao for diferente de -1 
	{
		cout << "Chave " << busca << " encontrada na posicao " << pos << endl;
	}
	else
	{
		cout << "Chave " << busca << " nao encontrada" << endl;
	}

	return 0;
}
