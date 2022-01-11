#include <stdio.h>

int main ()
{
	int x,y,i;

	printf("porfavor dijite un numero:\n");
	scanf("\n%i",&x);

	printf("porfavor dijite un numero mayor al anterion :\n");
	scanf("\n%i",&y);

	for (i = y + 1; i < 10; ++i)
	{
		/* code */
		printf("%i\n",i );
	}

	return 0;
}