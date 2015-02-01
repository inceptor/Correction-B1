#include <stdio.h>
#include <stdlib.h>

int main()
{
    char userInput[255] = {0}, cpUserInput[255] = {0};
    int i = 0;

    printf("Entrez votre mot : ");
    scanf("%s",userInput);

    //On peut utiliser ici la blibliotheque stirng.h et la fonction strcmp()

    for(i = 0; userInput[i] != '\0'; i++)
    {
        cpUserInput[i] = userInput[i];
    }
    cpUserInput[i] = '\0'; //On indique la fin de la chaine

    printf("Vous avez rentrer : %s\n",cpUserInput);


    return 0;
}
