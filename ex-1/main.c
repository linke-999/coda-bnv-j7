#include <stdlib.h>
#include <stdio.h>
#include "fonctions.h"

int main()
{
	char * str;

	str = str_cpy("gros caca qui pue et qui sent pas bon\n");

	printf("Voici ma chaine copiée:\n%s", str);

	free(str);
	exit(0);
}