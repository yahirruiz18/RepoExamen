#include <stdio.h>

int  main(int c, char** args)
{
	unsigned long factorial=1;
	int numero, contador;

	printf("numero: ");
	scanf_s("%i", &numero);
	
	contador = 1;

	while (contador <= numero)
	{
		factorial = factorial * contador;
		contador++;
	}

	printf("el numero factorial de %i es %li", numero, factorial);

	return 0;
}