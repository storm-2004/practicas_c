#include <stdio.h>

// paso 2

int prueba(); // Llamas la funcion afuera de todo o inicializas


int main ()
{
	int x,y;
	printf("num 1: \n");
	scanf("\n%i",&x);
	printf("num 2: \n");
	scanf("\n%i",&y);

	printf("el resultado es: %i\n", prueba(x,y)); // llamas la funcion dentro del main

	return 0;
}


// PASO 1 

int prueba(int x,int y) // Creas la funcion con sus parametros (opcional) y su tipo de datos
{
	int resultado; // tipo de datos 
	printf("hola funcion prueba\n");

	resultado = x + y; // proceso 

	return resultado;	// se retorna la variable 
}