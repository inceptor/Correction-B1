#include <stdio.h>
#include <stdlib.h>

void the_secret(int *inputUser); //on rajoute le point virgule et le pointeur

int main(int argc, char *argv[])
{
    int i=0, nb=0;

    printf("Votre valeur : ");
    scanf("%d",&nb); //On donne l'adresse mémoire ici MAIS AUSSI un entier

    the_secret(&nb); // on va modifier la valeur et rajouter une valeur magique

    char helloTexte[] = "I am happy to give you a new value : ";

    printf("%s %d \n", helloTexte, nb); // On réordonne ici

    return 0;
}

void the_secret(int *inputUser)//on attends une adresse mémoire, donc on va utiliser les pointeurs
{
    //ICI on pointe sur toute les valeurs pour modifier la case mémoire
    *inputUser *= 2;

    *inputUser += 2;

    *inputUser %= 20; //Ne pas oublier le point virgule manquant
}
