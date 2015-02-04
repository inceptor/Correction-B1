#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int userInput = 0;

    printf("Rentrer une valeur : ");
    scanf("%d",&userInput);

    printf("Adresse de la valeur : %d\n",&userInput);

    int* inputMul = &userInput;

    *inputMul *= 10;

    printf("Valeur de notre variable : %d et de notre pointeur : %d \n",userInput,*inputMul);

    char phrase[30] = "Bien que la ram est volatile.";

    printf("Adresse de l index 0 du tableau : %d puis de l index 1 : %d\n",phrase,phrase+1);

    printf("Taille en memoire d un char : %d\n",( (int)(phrase+1)-(int)phrase ));

    char* ptr = &phrase;
    int taille = 0;

    for (ptr =&phrase; *ptr!='\0'; ptr++)
    {
        taille++;
    }

    printf("Taille du tableau : %d et index de milieu : %d\n",taille,(int)taille/2);

    char* milieuPhrase = phrase+((int)taille/2);

    printf("Le mot secret est : %c%c%c%c%c",*phrase, *(milieuPhrase-2), *(milieuPhrase-1), *(phrase+taille-9), *(phrase+taille-8));

    return 0;
}
