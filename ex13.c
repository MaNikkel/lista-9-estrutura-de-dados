#include <stdio.h>
#include <stdlib.h>
#define N 3
int pilha[N];

void exibir(char situacao[30])
{
	int i;
	printf("\npilha %s:\n", situacao);
	for (i = 0; i < N; i++)
		printf("%d ", pilha[i]);
	printf("\n\n");
}

void inverterPilha()
{
	int i, aux;
	for(i = 0; i < (N/2); i++)
	{
		aux = pilha[i];
		pilha[i] = pilha[(N-1) - i];
		pilha[(N-1) - i] = aux;
	}
}
void popularPilha()
{
	int i;
	for (i = 0; i < N; i++)
	{
		printf("informe o valor de pilha[%d]: ", i);
		scanf("%d", &pilha[i]);
	}
}

int main()
{
	popularPilha();
	exibir("inicial");
	inverterPilha();
	exibir("invertida");
	system("pause");
	return 0;
}
