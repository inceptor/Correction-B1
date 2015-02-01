#include <stdio.h>
#include <stdlib.h>

int main()
{

    int choix = 0;

    do{
        printf("Professeur : Quel pokemon veux-tu ? Carapuce(0), Salameche(1) ou bulbizarre(2) ?");
        scanf("%d",&choix);
    }while(choix != 0 && choix != 1 && choix != 2);

    printf("Tu as choisi : ");

    switch(choix)
    {
        case 0 :
            printf("Carapuce.\n");
            break;
        case 1 :
            printf("Salameche.\n");
            break;
        case 2 :
            printf("bulbizarre.\n");
            break;
    }

    return 0;
}
