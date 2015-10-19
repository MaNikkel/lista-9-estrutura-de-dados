#include <stdio.h>
#define N 3
int fila[N], inicio = 0, fim = 0, circulou = 0;

void circular()
{
	if((fim == N) &&(inicio != 0))
	{
		fim = 0;
		circulou++;
	}
	if(inicio == N)
		inicio = 0;
}

void exibir()
{
	int i;
	for(i = inicio; i <= N; i++)
	{
		printf("%d, ", fila[i]);
	}
	if(circulou != 0)
	{
		for(i = 0; i < fim; i++)
			printf("%d, ", fila[i]);
	}
}

int filaCheia()
{
	if(inicio-1 == fim)
		return 0;
	else
		return 1;
}

int filaVazia()
{
	if (inicio == fim)
		return 0;
	else 
		return 1;
}


void enqueue(int x)
{
	int cheia = filaCheia();
	if(cheia == 1)
	{
		fila[fim] = x;
		fim++;
		printf("\nenfileirado\n");
	}
	else
		printf("\n\nfila cheia\n\n");
}

int dequeue()
{
	int vazia = filaVazia();
	if(vazia)
	{
		inicio--;
		printf("desenfileirado\n");
		return fila[inicio+1];
	}
	else
		printf("\n\nfila vazia\n\n");
}
int main()
{
	int op, x;
	do
	{
		printf("\n1 - enqueue\n2 - dequeue\n3 - exibir\n4 - sair\n");
		scanf("%d", &op);
		circular();
		switch (op)
		{
			case 1:
				printf("informe o valor de x: ");
				scanf("%d", &x);
				enqueue(x);
				break;
			case 2:
				x = dequeue();
				break;
			case 3:
				exibir();
		}
	}while(op != 4);
}
