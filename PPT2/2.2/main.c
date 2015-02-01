#include <stdio.h>
#include <stdlib.h>

int main()
{

    int note = 0;

    printf("Votre note : ");

    scanf("%c",&note);

    /*if(note=='a' || note=='A')
    {
        printf("La note est parfaite !\n");
    }
    else if(note=='b' || note=='B')
    {
        printf("Bien !\n");
    }
    else if(note=='c' || note=='C')
    {
        printf("La moyenne !\n");
    }
    else if(note=='d' || note=='D')
    {
        printf("Presque la moyenne !\n");
    }
    else if(note=='e' || note=='E')
    {
        printf("Nul !\n");
    }
    else if(note=='f' || note=='F')
    {
        printf("...\n");
    }
    else
    {
        printf("Erreur dans la saisie.\n");
    }*/

    //Switch est plus lisible dans ce cas. De plus nous ne faisons que voir si les valeurs sont égaux
    switch(note)
    {
        case 'a':
        case 'A':
            printf("La note est parfaite !\n");
            break;

        case 'b':
        case 'B':
            printf("Bien !\n");
            break;

        case 'c':
        case 'C':
            printf("La moyenne !\n");
            break;

        case 'd':
        case 'D':
            printf("Presque la moyenne !\n");
            break;

        case 'e':
        case 'E':
            printf("Nul !\n");
            break;

        case 'f':
        case 'F':
            printf("...\n");
            break;

        default:
            printf("Erreur dans la saisie.\n");
    }

    return 0;
}
