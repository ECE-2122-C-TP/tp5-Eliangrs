#include <stdio.h>
#include "exercice.h"
#include "fonctions.h"
#define TAILLE_TABLEAU 100

void EXERCICE1(){
    nombreRationnel b = saisirRationnel();
    nombreRationnel e = saisirRationnel();
    affichage(b);
    nombreRationnel f = multiplication(b,e);
    printf ("la multiplication du numerateur est : %d, la multiplication du denominateur est : %d \n",f.numerateur, f.denominateur);
    nombreRationnel g = addition(b,e);
    printf ("l addition du numerateur est : %d, l addition du denominateur est : %d \n", g.numerateur, g.denominateur);
};
void EXERCICE2(){
    Entiers nom = saisirInfosTab();
    int max = 0;
    int nbrentiersutiles, i = 0;
            Entiers monTableau[TAILLE_TABLEAU];
            printf("Combien d entiers voulez-vous definir ?\n");
            scanf("%d", &nbrentiersutiles);
            if (nbrentiersutiles > TAILLE_TABLEAU){
                printf("Vous avez demande trop d entiers !\n");
            } else if (nbrentiersutiles <= 0) {
                printf("Recommencez.\n");
            }
            else {
                //On demande a l'utilisateur(ice) de rentrer les entiers dans le tableau
                for (int i = 0; i < nbrentiersutiles; i++) {
                    monTableau[i] = saisirInfosTab();
                }
            }

            //On affiche le plus grand entier du tableau
            for (i = 0; i<nbrentiersutiles; i++){
                if (monTableau[i].x >= max) {
                    max = monTableau[i].x;
                }
            }
            printf("le max du tableau est : %d",max);
            return ;
    }
