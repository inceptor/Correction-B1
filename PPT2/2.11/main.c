#include <stdio.h>
#include <stdlib.h>

#define TAILLE_MATRICE 2

int main()
{
    int i = 0, j = 0, k = 0, somme = 0;
    int matriceA[TAILLE_MATRICE][TAILLE_MATRICE], matriceB[TAILLE_MATRICE][TAILLE_MATRICE];

    printf("Valeur de la premiere matrice : \n\n");
    for(i = 0; i < TAILLE_MATRICE; i++)
    {
        for(j = 0; j < TAILLE_MATRICE; j++)
        {
            printf("Rentrer la valeur [%d][%d] de la matrice : ",i,j);
            scanf("%d",&matriceA[i][j]);
            fflush(stdin);
        }
    }

    printf("Valeur de la deuxieme matrice : \n\n");
    for(i = 0; i < TAILLE_MATRICE; i++)
    {
        for(j = 0; j < TAILLE_MATRICE; j++)
        {
            printf("Rentrer la valeur [%d][%d] de la matrice : ",i,j);
            scanf("%d",&matriceB[i][j]);
            fflush(stdin);
        }
    }

    printf("Resultat de la multiplication de matrice : \n\n");
    for(i = 0; i < TAILLE_MATRICE; i++)
    {
        for(j = 0; j < TAILLE_MATRICE; j++)
        {
            for(k = 0; k < TAILLE_MATRICE; k++)
                somme += matriceA[i][k] * matriceB[k][j];

            printf("%d \t",somme);
            somme = 0;
        }
        printf("\n");
    }


    return 0;
}
