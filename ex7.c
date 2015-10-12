#include <stdio.h>
#include <stdlib.h>
#define N 10
int pilha1[N], pilha2[N], topo1 = 0, topo2 = 0;



void menu(int *opcao)
{
	printf("1 - empilhar\n");
	printf("2 - exibir em ordem inversa\n");
	scanf("%d", opcao);
		
}
int main()
{
	int op;
	menu(&op);
}
