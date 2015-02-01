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
        if(mot2[i] >= 'a' && mot1[i] >= 'a' && mot2[i] != mot1[i] ) //Si c'est en minuscule mais différent
            difference++;
        else if(mot2[i] >= 'a' && mot1[i] < 'a' && ( (mot2[i] - ('a' - 'A') ) != mot1[i]) ) //si le mot 2 est en minuscule, on le met en majuscule et on compare avec le mot 1
             difference++;
        else if(mot1[i] >= 'a'&& mot2[i] < 'a' && (mot2[i] != (mot1[i] - ('a' - 'A') )) ) // Pareil que plus haut mais vaec le mot 1
            difference++;

    }

    printf("Les mots sont : %s\n",(difference) ? "Different" : "Identique");


    return 0;
}
