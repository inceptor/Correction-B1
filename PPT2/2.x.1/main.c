#include <stdio.h>
#include <stdlib.h>

int main()
{
    //le mot a chiffrer
    char mot[255] = {0};
    printf("Quel est votre mot ? ");
    scanf("%s",&mot);

    //le chiffre qu'on utilisera
    int decalement = 0;
    printf("Quelle est le chiffre a utiliser ? ");
    scanf("%d",&decalement);

    decalement %= 26;

    int i = 0;

    //1ere boucle avec le mot choisi
    for(i=0; mot[i] != '\0'; i++){

        if(mot[i] >= 'a' && mot[i] <= 'z' && (mot[i]+decalement) > 'z' ) //Si c'est une lettre minuscule et que le décalement sort de l'alphabet
            printf("%c", 'a' - 1 + ( (mot[i] + decalement) % 'z' ) ); // On ajoute le décalement, modulo avec la lettre avec la valeur numérique la plus haute et on rajoute le reste a la lettre la plus petite
        else if(mot[i] >= 'A' && mot[i] <= 'Z' && (mot[i]+decalement) > 'Z' ) //Meme logique que plus haut mais avec les majuscul
            printf("%c", 'A' - 1 + (mot[i] + decalement) % 'Z' ); //meme logique que plus haut
        else
            printf("%c", mot[i] + decalement);
    }

    return 0;

}
