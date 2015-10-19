#include <stdio.h>
#include <stdlib.h>
#define N 10
char pilha1[N], pilha2[N];
int topo1 = 0, topo2 = 0;

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
		printf("pilha[%d] = %c\n", i, pilha2[i]);
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
	char letra;
	int op;
	do
	{
		menu(&op);	
		switch(op)
		{
			case 1:
				fflush(stdin);
				printf("informe a letra a ser empilhado: ");
				scanf("%c", &letra);
				push(letra);
				break;
			case 2:
				preencherP2();
		}
	}while(op != 0);
}
