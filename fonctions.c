#include <stdio.h>
#include "fonctions.h"

/* Fonction qui retourne un rationnel
 * -> IN : structure comprenant un rationnel
 * -> OUT : affiche un rationnel*/
nombreRationnel saisirRationnel(){
    nombreRationnel monRationnel;
    printf("saisissez un numerateur\n");
    scanf("%d",&monRationnel.numerateur);
    printf("saisissez un denominateur\n");
    scanf("%d",&monRationnel.denominateur);
    return monRationnel;
}

/* Fonction qui affiche un rationnel
 * -> IN : structure comprenant un rationnel
 * -> OUT : affiche un rationnel*/
void affichage(nombreRationnel p){
    printf("Votre rationnel est : => numerateur : %d, => denominateur : %d\n",p.numerateur,p.denominateur);
}

/* Fonction qui affiche la multiplication de deux rationnels
 * -> IN : structure comprenant deux rationnels
 * -> OUT : affiche la multiplication de deux rationnels*/
nombreRationnel multiplication(nombreRationnel a, nombreRationnel b){
    nombreRationnel multi;
    multi.numerateur= a.numerateur * b.numerateur;
    multi.denominateur= a.denominateur * b.denominateur;
    return multi;
}

/* Fonction qui affiche la l addition de deux rationnels
 * -> IN : structure comprenant deux rationnels
 * -> OUT : affiche la l addition de deux rationnels*/
nombreRationnel addition(nombreRationnel c,nombreRationnel d){
    nombreRationnel addit;
    addit.numerateur = (c.numerateur * d.numerateur) + (d.numerateur * c.denominateur);
    addit.denominateur = c.denominateur * d.denominateur;
    return addit;
}

/* Fonction qui retourne les entiers qui seront presents dans le tableau
 * -> IN : structure compremant des entiers
 * -> OUT : retourne des entiers */
Entiers saisirInfosTab(){
    Entiers p;
    printf("Veuillez entrer n entiers\n");
    scanf("%d", &p.x);
    return p;
}