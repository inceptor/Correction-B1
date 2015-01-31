#include <stdio.h>
#include <stdlib.h>

int main()
{

    int age = 0;

    printf("Votre age : ");

    scanf("%d",&age);

    (age>=18) ? printf("Vous etes majeur !\n") : printf("Vous etes mineur !\n");

    return 0;
}
