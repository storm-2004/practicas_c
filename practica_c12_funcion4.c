#include <stdio.h>
void suma();

int main()
{
	suma();
	return 0;
}


void suma()
{
	int num1,num2;
	int resultado;

	printf("num 1:\n");
	scanf("\n%i",&num1);

	printf("num 2:\n");
	scanf("\n%i",&num2);

	resultado = num1 + num2;
	printf("el resultado es:%i\n",resultado);

}