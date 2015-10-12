#include <stdio.h>
#include <stdlib.h>
#define N 10
int pilha1[N], pilha2[N], topo1 = 0, topo2 = 0;

void push(int numero)
{
	pilha1[topo1] = numero;
	topo1++;
}

void menu(int *opcao)
{
	printf("1 - empilhar\n");
	printf("2 - exibir em ordem inversa\n");
	scanf("%d", opcao);
		
}
int main()
{
	int num;
	int op;
	menu(&op);
	
	switch(op)
	{
		case 1:
			printf("informe um numero a ser empilhado: ");
			scanf("%d", &num);
			push(num);
	}
}
