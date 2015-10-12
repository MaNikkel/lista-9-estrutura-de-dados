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
	printf("0 - sair\n");
	scanf("%d", opcao);
		
}
void exibir()
{
	int i;
	for(i = 0; i < topo2; i++)
		printf("pilha[%d] = %d\n", i, pilha2[i]);
}
void preencherP2()
{
	topo1--;
	do
	{
		pilha2[topo2] = pilha1[topo1];
		topo1--;
		topo2++;
	}while(topo1 >= 0);
	exibir();
}
int main()
{
	int num;
	int op;
	do
	{
		menu(&op);	
		switch(op)
		{
			case 1:
				printf("informe um numero a ser empilhado: ");
				scanf("%d", &num);
				push(num);
				break;
			case 2:
				preencherP2();
		}
	}while(op != 0);
}
