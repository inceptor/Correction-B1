#include <stdio.h>
#include <stdlib.h>
#include <time.h> // a inclure

#define TAILLE_TABLEAU 10

int main(void){

	int nombre_aleatoire = 0, i = 0;

	int tabBulle[TAILLE_TABLEAU] = {0}, tabInsertion[TAILLE_TABLEAU] = {0}, tabSelection[TAILLE_TABLEAU] = {0};

	srand(time(NULL)); // initialisation de rand

    printf("Initialisation des tableaux\n\n");
    for(i = 1; i < TAILLE_TABLEAU; i++)
    {
        tabBulle[i] = rand() % 500;
        tabInsertion[i] = rand() % 500;
        tabSelection[i] = rand() % 500;
    }

    //---------------------tri a bulle-----------------------
    short permut = 1; //va agir comme un booleen

	do{
        permut = 0;
        for(i = 0; i < TAILLE_TABLEAU; i++){
            if( tabBulle[i] > tabBulle[i+1]){
                tabBulle[i] += tabBulle[i+1];
                tabBulle[i+1] = tabBulle[i] - tabBulle[i+1];
                tabBulle[i] = tabBulle[i] - tabBulle[i+1];
                permut = 1;
            }
        }
	}while(permut);

	//----------------tri insertion----------------------
	int  j = 0, elementInsere = 0;

    for (i = 1; i < TAILLE_TABLEAU; i++) {
        elementInsere = tabInsertion[i];

        for (j = i; j > 0 && tabInsertion[j - 1] > elementInsere; j--) {
            tabInsertion[j] = tabInsertion[j - 1];
        }
        tabInsertion[j] = elementInsere;
    }


    //----------------------tri selection-----------------
    int indice_max = 0;

    for(i = 1; i < TAILLE_TABLEAU-1; i++){
        indice_max = i;

        for(j = i+1; j < TAILLE_TABLEAU; j++)
        {
            if(tabSelection[j] < tabSelection[indice_max])
                indice_max = j;
        }

        if(i != indice_max)
        {
            tabSelection[i] += tabSelection[indice_max];
            tabSelection[indice_max] = tabSelection[i] - tabSelection[indice_max];
            tabSelection[i] = tabSelection[i] - tabSelection[indice_max];
        }
    }


    for(i = 0; i < TAILLE_TABLEAU; i++)
        printf("%d ",tabBulle[i]);

    printf("\n");

    for(i = 0; i < TAILLE_TABLEAU; i++)
        printf("%d ",tabInsertion[i]);

    printf("\n");

    for(i = 0; i < TAILLE_TABLEAU; i++)
        printf("%d ",tabSelection[i]);

	return 0;
}
