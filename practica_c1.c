 #include <stdio.h>
int main()

{
	printf("hola Mundo.\n");

	int x = 1; //Solo se escriben numeros, pesan 16 bits el limite de estas varianles son 2 elevado a las 32
	float y = 2.1; // solo numeros y pesan 32bits
	double y2 = 2.33; // Esto es igual a float pero pesa 64 bits
	char l = 'q'; //variable que almacena letras y numero que los usa como letras
	
	printf("numero tipo entero %i. \n", x );
	printf("numero tipo float  %f. \n", y );
	printf("numero tipo double %f. \n,", y2);
	printf("letra %c. \n", l);
	return 0;

}