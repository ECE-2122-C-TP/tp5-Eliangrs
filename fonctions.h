
#ifndef TP5_FONCTIONS_H
#define TP5_FONCTIONS_H
typedef struct {
    int numerateur, denominateur;
} nombreRationnel;
typedef struct {
    int x;
} Entiers;

nombreRationnel saisirRationnel();
void affichage();
nombreRationnel multiplication();
nombreRationnel addition();
Entiers saisirInfosTab();
#endif //TP5_FONCTIONS_H
