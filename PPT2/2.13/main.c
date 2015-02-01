#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i = 10, a = 0;


    do{
        printf("Tant que a qui vaut %d est inferieur a 10, on continue la boucle\n",a); //On rajoute a qui est manquant
        a++; //Pour stopper la boucle infinie
    }while(i>a);


    return 0;
}
