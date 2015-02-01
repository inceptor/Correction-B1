#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0;

    int x = 0;

    printf("Rentrez le nombre que vous souhaitez diviser : ");
    scanf("%d",&x); // Mettre l'adresse mémoire

    for(i = -10; i < 10; i++) //On peut pas divisé par zero
    {
        if(i!=0)
            printf("%f \n",(float)x/i); //Le résultat peut être un nombre a virgule donc convertir en float
        else
            printf("La division par zero est interdit.\n");
    }

    return 0;
}
