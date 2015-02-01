#include <stdio.h>
#include <stdlib.h>

int main()
{
    char userInput[255] = {0};
    int longueur = 0;

    printf("Entrez votre mot : ");
    scanf("%s",userInput);

    //On peut utiliser la blibliotheque : sting.h et la fonction strlen()

    for(longueur = 0; userInput[longueur] != '\0'; longueur++); //On rajoute le point virgule pour dire qu'on ne met pas de bloque d'instruction

    printf("Vous avez rentrer : %s et d'une longueur de : %d\n",userInput,longueur);


    return 0;
}
