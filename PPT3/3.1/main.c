#include <stdio.h>
#include <stdlib.h>

typedef struct Joueur Joueur; //pour éviter de déclarer une variable : struct Joueur firstPlayer
struct Joueur{
        int id;
        char nom[10];
        int age;
    };


int main(void)
{
    Joueur firstPlayer;

    printf("Nom du joueur : ");
    scanf("%s",firstPlayer.nom);

    fflush(stdin);

    printf("Age du joueur : ");
    scanf("%d",&firstPlayer.age);

    firstPlayer.id = 1;

    printf("Le joueur numero %d s appelant %s a un age de %d\n", firstPlayer.id, firstPlayer.nom, firstPlayer.age);

    return 0;
}
