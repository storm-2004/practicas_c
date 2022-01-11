#include <stdio.h>

void cambio(int *a,int *b);

// * es una variable puntero

// &es la ubicacion del puntero o la direccion de la memoria

int main ()
{
	int x,y;

	x = 5;
	y = 10;

	cambio(&x,&y);
	printf("el valor actual de x es %i y el valor de y es %i\n",x,y );

	return 0;
}

void cambio(int *a,int *b)
{
	int aux;

	aux = *a;

	*a = *b;
	*b = aux;
}