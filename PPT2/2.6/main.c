#include <stdio.h>
#include <stdlib.h>

#define TAILLE_TABLEAU 5

int main()
{
    int i = 0, min = 0, max = 0, somme = 0, mediane = 0;
    int tab[TAILLE_TABLEAU];

    for(i=0; i<TAILLE_TABLEAU; i++)
    {
        printf("Valeur n %d : ",i+1);
        scanf("%d",&tab[i]);
        fflush(stdin);

        somme += tab[i];

        if(tab[i] > max)
            max = tab[i];

        if(tab[i] < min)
            min = tab[i];

    }

    printf("La valeur minimum est : %d\n",min);
    printf("La valeur maximum est : %d\n",max);
    printf("La valeur moyenne est : %f\n",(float)somme / TAILLE_TABLEAU);
    printf("La mediane  est : %d\n",tab[2]);

    return 0;
}
