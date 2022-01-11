#include <stdio.h>

// Creando mejores las variables
// operaciones basicas

#include <math.h>// libreria para realizar mas operaciones basicas

int main()
{
	int x,y,aux;

	printf("dijite el valor de x: \n");
	scanf("\n%i",&x);

	printf("dijite el valor de y: \n");
	scanf("\n%i",&y);

	aux = x;
	x = y;
	y = aux;

	printf("el valor de x es:%i\n",x);
	printf("el valor de y es:%i\n",y);

	return 0;

}