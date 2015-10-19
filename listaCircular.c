#include <stdio.h>
#define N 3
int fila[N], inicio = 0, fim = 0, circulou = 0;


void exibir()
{
	int i;
	for(i = inicio; i <= N; i++)
	{
		printf("%d, ", fila[i]);
	}
}

void enqueue(int x)
{
	if (fim+1==inicio || (fim+1==N && !inicio)) 
	{
		printf("\nLista cheia.\n");
		return;
	}
	fila[fim]=x;
	fim++;
	if (fim==N)
		fim=0; /* reinicia */
}

int dequeue()
{
	if (inicio==N)
		inicio=0; /* reinicia */
	if (inicio==fim) 
	{
		printf("\nLista vazia.\n");
		return -1;
	}
	inicio++;
	return fila[inicio-1];
}
int main()
{
	int op, x;
	do
	{
		printf("\n1 - enqueue\n2 - dequeue\n3 - exibir\n4 - sair\n");
		scanf("%d", &op);
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
