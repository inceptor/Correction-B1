#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if(argc != 3){
        printf("Permet d'afficher des tables de multiplications\n");
        printf("La commande s'utilise : test.exe OPTION VALEUR\n");
        printf("OPTION :\n");
        printf("S : Affiche les solutions.\n");
        printf("N : N'affiche aucune solution.\n");
        printf("VALEUR :\n");
        printf("Nombre qui indique la limite des tables.\n");
    }
    else
    {

        //A optimisé,on peut réduire le nombre de ligne de code
        if( argv[1][0] == 'S' || argv[1][0] == 's')
        {
            int i = 0, j = 0, tableSize = 0;
            tableSize = atoi(argv[2]);

            for(i=0; i <= tableSize; i++)
            {
                printf("Table de %d : \n",i);
                for(j=0; j <= tableSize; j++)
                {
                    printf("%d * %d = %d\n",i,j,i*j);
                }
            }
        }
        else if(argv[1][0] == 'N' || argv[1][0] == 'n')
        {
            int i = 0, j = 0, tableSize = 0;
            tableSize = atoi(argv[2]);

            for(i=0; i <= tableSize; i++)
            {
                printf("Table de %d : \n",i);
                for(j=0; j <= tableSize; j++)
                {
                    printf("%d * %d = \n",i,j);
                }
            }
        }
        else
            printf("Erreur, mauvaise option. Pour plus d'information taper : test.exe");

    }

    return 0;
}
