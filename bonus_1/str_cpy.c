#include <stdlib.h>
#include <stdio.h>
#include "fonctions.h"
char *str_cpy(char * chaine_a_copier)
{
    int i = 0;
    int nombre_a_alouer = énumerer_chaine_caractere(chaine_a_copier);
    int nombre = nombre_a_alouer - 1;
    printf("%d\n", nombre_a_alouer);
    char * str = malloc(nombre_a_alouer + 1 * sizeof(char));
    str[nombre_a_alouer] = '\0';
    while (i != nombre_a_alouer)
    {
        str[i] = chaine_a_copier[nombre];
        printf("le i : %d le nombre : %d le char de : %c\n" , i, nombre, str[i]);

        i++;
        nombre--;

    }
    return str ;
    
}