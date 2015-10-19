#include <stdio.h>
#include <stdlib.h>
#define N 32
int pilha[N], topo = 0;


void converter(int num)
{
	while(num > 0)
	{
		pilha[topo] = num % 2;
		num /= 2;
		topo++;
	}
}

int main()
{
	int num;
	printf("escreva o numero a ser convertido: ");
	scanf("%d", &num);
	converter(num);
	printf("numero em binario = ");
	for(num = topo; num >= 0; num--)
	{
		printf("%d", pilha[num]);
	}
}
