#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAILLE_MAP 10

typedef struct Map Map;
struct Map{
        int content[TAILLE_MAP][TAILLE_MAP];
        int i;
        int j;
    };

typedef struct Pokemon Pokemon;
struct Pokemon{
        int id;
        char nom[20];
        char type[3];
    };

typedef struct Joueur Joueur; //pour éviter de déclarer une variable : struct Joueur firstPlayer
struct Joueur{
        int id;
        char nom[10];
        int age;
        Pokemon Pokemon[6];
    };

typedef struct Jeu Jeu;
struct Jeu{
        Map Map[20];
        Joueur Joueur;
        char nom[7];
        char date[15];
    };


int main(void)
{
    Jeu notreJeu;

    //initialisation
    int x = 0, i = 0, j = 0;

    memcpy ( notreJeu.nom, "Pokemon", strlen("Pokemon")+1 );
    memcpy ( notreJeu.date, "04/02/2015", strlen("04/02/2015")+1 );

    //Pour chaque map
    for(x = 0; x < 20; x++)
    {
        notreJeu.Map[x].i = TAILLE_MAP;
        notreJeu.Map[x].j = TAILLE_MAP;

        for(i = 0; i < notreJeu.Map[x].i; i++)
        {
            for(j = 0; j < notreJeu.Map[x].j; j++)
                notreJeu.Map[x].content[i][j] = 0;
        }

    }

    //Info joueur
    printf("Nom du joueur : ");
    scanf("%s",notreJeu.Joueur.nom);

    fflush(stdin);

    printf("Age du joueur : ");
    scanf("%d",&notreJeu.Joueur.age);

    notreJeu.Joueur.id = 1;

    for(i = 0; i < 3; i++)
    {
        notreJeu.Joueur.Pokemon[i].id = i+1;

        printf("Nom du pokemon numero %d : ",i+1);
        scanf("%s",notreJeu.Joueur.Pokemon[i].nom);

        fflush(stdin);

        printf("Type du Pokemon : ");
        scanf("%s",notreJeu.Joueur.Pokemon[i].type);

        fflush(stdin);
    }

    printf("Le joueur numero %d s appelant %s a un age de %d\n", notreJeu.Joueur.id, notreJeu.Joueur.nom, notreJeu.Joueur.age);

    for(i = 0; i < 3; i++)
        printf("Pokemon numero %d s appelant %s et de type %s\n",notreJeu.Joueur.Pokemon[i].id , notreJeu.Joueur.Pokemon[i].nom , notreJeu.Joueur.Pokemon[i].type);

    return 0;
}
