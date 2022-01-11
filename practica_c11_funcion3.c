#include <stdio.h>
#include <math.h>

float area();
float area_c();

int main()
{
	int opcion;
	int bandera;


	bandera = 1;
	while(bandera == 1){

		printf("Este script hecho en c es para calcular la altura y base de un triangulo\n");
		printf("1: calcular el area \n");
		printf("2: Calcular el area de un circulo\n");
		printf("3: salir\n");
		
		scanf("\n%i",&opcion);
		
		if (opcion == 1)
		{
			/* code */
			printf("el area es:%f\n",area());
		
		}else if (opcion == 2){

			printf("el resultado es:%f\n",area_c());
		
		}else if(opcion == 3){
			bandera = 0;
			printf("chao bye bye \n");
		}
	}

	return 0;
}

float area()
{
	float resultado,b,h;

	printf("dijite la base del triangulo\n");
	scanf("\n%f",&b);
	printf("dijite la altura\n");
	scanf("\n%f",&h);

	resultado = (b*h)/2;
	return resultado;
}

float area_c()
{
	float c,resultado;
	float pi;

	printf("dijite c\n");
	scanf("\n%f",&c);
	
	pi = cos(-1.0);
	resultado = c / 2*pi;
	
	return resultado;
}