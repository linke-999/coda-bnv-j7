#include <stdlib.h>
#include <stdio.h>
#include "fonctions.h"

int main()
{
	char * str;

	str = str_cpy("hello word\n");

	printf("Voici ma chaine copiée:\n%s", str);

	free(str);
	exit(0);
}