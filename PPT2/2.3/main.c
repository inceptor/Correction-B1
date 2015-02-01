#include <stdio.h>
#include <stdlib.h>

int main()
{

    float prix = 0;
    char note = 0;

    printf("Le prix de la comande : ");
    scanf("%f",&prix);
    fflush(stdin); //vide le buffer

    printf("La note du client : ");
    scanf("%c",&note);

    if(prix >= 100 && prix < 300)
        prix *= 0.90;
    else if(prix >= 300 && prix < 500)
        prix *= 0.80;
    else if(prix >= 500)
        prix *= 0.70;

    printf("Le prix avec reduction : %f\n",prix);

    if(note == 'b' || note == 'B')
        prix *= 0.95;
    else if(note == 'm' || note == 'M')
        printf("Aucune reduction pour un client mauvais\n");
    else
        printf("Erreur dans la saisie de la note client. Aucune reduction appliquer\n");

    printf("Prix final : %f\n",prix);

    return 0;
}
