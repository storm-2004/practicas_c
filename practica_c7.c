#include <stdio.h>

int main()
{
	char x;

	do
	{
		/* code */
		printf("dijite la letra s para salir el bucle\n");
		//fflush(stdin);
		scanf("\n%c",&x);
	} while (x != 's');
	return 0;
}