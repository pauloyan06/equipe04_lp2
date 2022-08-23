#include <stdio.h>
int main (int argc, char **argv)
{
	int a, b, cont;

	printf("Digite o primeiro numero: \n");
	scanf("%d",&a);
	printf("Digite o segundo numero: ");
	scanf("%d",&b);

	if ( a < b)
	{
		cont= a;
	}
	else
	{
		cont= b;
	}
	if (a==b)
	{
		printf("Nao existe numeros compreendidos entre os dois valores! \n");
	}

	while( (cont>=a && cont<(b-1)) || (cont>=b && cont<(a-1)) )
	{
		cont= cont+1;
		printf("%d \n", cont);
	}
	return 0;
}
