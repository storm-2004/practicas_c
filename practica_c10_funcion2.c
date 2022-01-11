# include <stdio.h>

int suma();
int restar();

int main ()
{
	int n1,n2;
	char opcion;
	
	printf("opcion s:sumar\n");
	printf("opcion r:restar\n");
	
	scanf("\n%c",&opcion);
	

	if (opcion == 's' )
	{
		/* code */
		printf("num 1\n");
		scanf("\n%i",&n1);

		printf("num 2\n");
		scanf("\n%i",&n2);

		printf("el resultado es: %i\n",suma(n1,n2));
	} else if (opcion == 'r'){
		/* code */
		printf("num 1\n");
		scanf("\n%i",&n1);

		printf("num 2\n");
		scanf("\n%i",&n2);

		printf("el resultado es: %i\n",restar(n1,n2));
	}
	else{
		printf("porfavor dijite una opcion\n");
	}

	return 0;
}

int suma(int num_1,int num_2)
{
	int resultado;

	resultado = num_1 + num_2;
	return resultado;
}

int restar(int num_1,int num_2)
{
	int resultado;

	resultado = num_1 - num_2;
	return resultado;

}

