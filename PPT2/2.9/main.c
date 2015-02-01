#include <stdio.h>
#include <stdlib.h>

int main()
{
    char mot1[255] = {0}, mot2[255] = {0};
    int i = 0, difference = 0;

    printf("Entrez votre premier mot : ");
    scanf("%s",mot1);

    fflush(stdin);

    printf("Entrez votre deuxieme mot : ");
    scanf("%s",mot2);

    //On peut utiliser ici la blibliotheque stirng.h et la fonction strcmp()

    for(i = 0; mot1[i] != '\0'; i++) // Il peut avoir un bug, trouver le et coriger le
    {
        if(mot2[i] != mot1[i])
            difference++;
    }

    printf("Les mots sont : %s\n",(difference) ? "Different" : "Identique");


    return 0;
}
