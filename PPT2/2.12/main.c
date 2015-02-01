#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a = 0, b = 0; //on initialise ici

    printf("Votre valeur : "); //On rajoute le point virgule manquant
    scanf("%d",&a); //On donne a la fonction scanf une adresse mémoire + dans le printf on veut modifier a et non b

    printf("Vous avez rentrer la valeur : %d et b vaut : %d",a,b); //Point virgule au lieu d'une virgule et le %d pour afficher b


    return 0;
}
