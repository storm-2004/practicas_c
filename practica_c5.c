#include <stdio.h>

int main ()
{
	int x,y;

	printf("dijite un numero\n");
	scanf("\n%i",&x);

	printf("dijite un numero\n");
	scanf("\n%i",&y);

	int j = x + 0;

	while(j < 11){
		printf("%i\n",j);
		++j;
	}
	
	return 0;

}