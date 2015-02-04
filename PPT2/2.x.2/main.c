#include <stdio.h>
#include <stdlib.h>

//Ce code peut �tre am�liorer. Ici j'ai volontairement s�parrer l'initialisation/calculs et l'affichage
int main()
{
    const int hauteur = 15;
    const int largeur = 11;

    char map[hauteur][largeur];
    int i=0,j=0;

    //initialise le vide + mur
    for(i=0; i < hauteur; i++)
    {
        for(j=0; j < largeur; j++)
        {
            map[i][j] = (i==0 || j==0 || i== (hauteur-1) || j==(largeur-1) ) ? 'H' : ' ';
        }
    }

    map[(int)(i/2)][(int)(j/2)] = 'X'; //place au centre le personnage

    //On affiche le r�sultat
    for(i=0; i < hauteur; i++)
    {
        for(j=0; j < largeur; j++)
        {
            printf("%c ",map[i][j]);
        }
        printf("\n");
    }

    return 0;
}
