#include <stdio.h>

int main(int argc, char *argv[] __attribute__((unused)))

{
	if(argc != 3)

	{
		printf("Error1\n");

		return (1);
	}


	int num1 = argv[1];
	int num2 = argv[2];
	int resultat = num1 * num2;


	printf("%d\n", resulat);

	return (0);
}
		
