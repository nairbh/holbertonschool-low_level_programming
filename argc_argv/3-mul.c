#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])

{
	int num1, num2, resultat;
	if(argc != 3)

	{
		printf("Error1\n");

		return (1);
	}


	num1 = atoi(argv[1]);

	num2 = atoi(argv[2]);

	printf("%d", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}
		
