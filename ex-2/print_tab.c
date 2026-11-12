#include <stdlib.h>
#include <stdio.h>
#include "fonctions.h"

void print_tab(char ** str_tab){

    int i = 0;

    while (str_tab[i] != NULL)
    {
        printf("%s \n", str_tab[i]);
        i++;
    }
    
}