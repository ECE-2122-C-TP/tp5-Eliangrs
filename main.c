#include <stdio.h>
#include "fonctions.h"

int main() {
    printf("=====\tTPX : XXXXX\t=====\n");
    int choixExercice = 0;

    //On demande son choix à l'utilisateur
    printf("Quel exercice voulez-vous lancer ?\n");
    //Pensez à afficher les choix disponibles ici

    do {
        scanf("%d", &choixExercice);
        switch (choixExercice) {
            case 1 :
                EXERCICE1();
                break;
            case 2 :
                EXERCICE2();
                break;
            case 3 :
                //EXERCICE3();
                break;
            case 0 :
                break;
            default : {
                printf("Choix Invalide ! Veuillez selectionner un exercice :\n");

                break;
            }
        }
    } while (choixExercice != 0); //Si choix == 0 on arrête !

    printf("Au revoir !\n");

    return 0;

}