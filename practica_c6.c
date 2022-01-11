#include <stdio.h>

int main()
{
	int opcion;
	int num_1,num_2,resultado;
	
	printf("opcion 1: sumar\n");
	printf("opcion 2: restar\n");
	printf("opcion 3: multiplicar\n");
	
	scanf("\n%i",&opcion);

	if (opcion == 1)
	{
		/* code */

		printf("numero: \n");
		scanf("\n%i",&num_1);

		printf("numero: \n");
		scanf("\n%i",&num_2);

		resultado = num_1 + num_2;
		printf("el resultado es: %i\n",resultado );
	
	} else if(opcion == 2){

		printf("numero: \n");
		scanf("\n%i",&num_1);

		printf("numero: \n");
		scanf("\n%i",&num_2);

		resultado = num_1 - num_2;

		printf("resultado: %i\n",resultado);

	} else if(opcion == 3){
		
		printf("numero:\n");
		scanf("\n%i",&num_1);

		printf("numero: \n");
		scanf("\n%i",&num_2);

		resultado = num_1*num_2;
		printf("%i\n",resultado);
	}



	return 0;
}