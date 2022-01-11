#include <stdio.h>

int main()
{
	int num;

	printf("dijite un numero entre 1 y 4\n");
	scanf("\n%i",&num);

	switch (num){
		case 1: printf("lunes\n");break;
		case 2: printf("martes\n");break;
		case 3: printf("miercoles\n");break;
		case 4: printf("jueves\n");break;
	}

	if (num == 5)
	{
		/* code */
		printf("el numero es %i\n",num);
	}

	else if (num == 6){
		printf("el numero es %i\n",num);
	}
}