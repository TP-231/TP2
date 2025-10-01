#include<stdio.h>
#include<stdlib.h>

typedef struct cellule {
    int age;
    int ID;
    struct cellule*suivant;
} Cellule;

Cellule*insert_tete(Cellule**premiere,int age,int*ID) {
    Cellule*nouvelle=(Cellule*)malloc(sizeof(Cellule));
    if(!nouvelle) {
        return NULL;
    }
    nouvelle->age=age;//entrer l'age et l'id deja incrementer
    nouvelle->ID=*ID;
    if(*premiere==NULL) {
        nouvelle->suivant=nouvelle;
        *premiere=nouvelle;
    } else {
        Cellule*dernier=*premiere;
        while(dernier->suivant!=*premiere) {
            dernier=dernier->suivant;
        }
        nouvelle->suivant=*premiere;
        dernier->suivant=nouvelle;
        *premiere=nouvelle;
    }
    return *premiere;
}

Cellule*insert_fin(Cellule**premiere,int age,int*ID) {
    Cellule*nouvelle=(Cellule*)malloc(sizeof(Cellule));
    if(!nouvelle) {
        return NULL;
    }
    nouvelle->age=age;
    nouvelle->ID=*ID;
    if(*premiere==NULL) {
        nouvelle->suivant=nouvelle;
        *premiere=nouvelle;
    } else {
        Cellule*derniere=*premiere;
        while(derniere->suivant!=*premiere) {
            derniere=derniere->suivant;
        }
        nouvelle->suivant=*premiere;
        derniere->suivant=nouvelle;
    }
    return *premiere;
}
void affiche(Cellule*premiere,Cellule*derniere) {
    if(premiere==NULL) {
        return ;
    }
    Cellule*courant=premiere;
    printf("\n\n=== LISTE CIRCULAIRE AGE ===\n");
    do {
        printf("ID(%d):%d  ",courant->ID,courant->age);
        courant=courant->suivant;
    }
    while(courant!=premiere);
    printf("\n");
}

void preuve_circulaire(Cellule*premiere,int i,int*ID) {
    int j=0;
    if(premiere==NULL) {
        return ;
    }
    Cellule*courant=premiere;
    printf("\n=== PREUVE CIRCULAIRE ===\n");
    for(j=0; j<i+5; j++) {
        printf("ID(%d):%d  ",courant->ID,courant->age);
        courant=courant->suivant;
    }
    printf("\n");
}

void menu() {
    printf("\n===== MENU =====\n");
    printf("1. Inserer en tete de liste\n");
    printf("2. Inserer en fin de liste\n");
    printf("3. Afficher la liste\n");
    printf("4. Preuve circulaire\n");
}

int main() {
    printf("Hello!\n");
    int i,age,choix,ID;
    Cellule*premiere=NULL;
    Cellule*derniere;
    do {
        menu();
        printf("Choix: ");
        scanf("%d",&choix);
        switch (choix) {
            case 1:
                printf("AGE: ");
                scanf("%d",&age);
                ID++;
                insert_tete(&premiere,age,&ID);
                i++;
                break;
            case 2:
                printf("AGE: ");
                scanf("%d",&age);
                ID++;
                insert_fin(&premiere,age,&ID);
                i++;
                break;
            case 3:
                affiche(premiere,derniere);
                break;
            case 4:
                preuve_circulaire(premiere,i,&ID);
                break;
            default:
                printf("Choix non disponible!\n");
                break;
        }
    }
    while(choix!=0);
    free(premiere);
    return 0;
}