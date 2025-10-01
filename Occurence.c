#include<stdio.h>
#include<stdlib.h>
typedef struct element {
    int val;
    struct element *suivant;
} element;
element* ajouterDebut(element* liste, int valeur) {
    element* nouveau = malloc(sizeof(element)); 
    nouveau->val = valeur;                       
    nouveau->suivant = liste;                    
    return nouveau;
}
void afficherListe(element* liste) {
    element *tmp = liste;
    while(tmp != NULL) { 
        printf("%d ", tmp->val);
        tmp = tmp->suivant;    
    }
}

element* supprimerElement(element* liste, int valeur){
    if (liste == NULL) {
        return NULL;
    }

    if (liste->val == valeur) {
        element* tmp = liste->suivant; 
        free(liste); 
        return supprimerElement(tmp, valeur);
    } else {
        liste->suivant = supprimerElement(liste->suivant, valeur);
        return liste;
    }
}
int main() {
    
    element* maListe = NULL;
    int valeurASupprimer;
    maListe = ajouterDebut(maListe, 2);
    maListe = ajouterDebut(maListe, 5);
    maListe = ajouterDebut(maListe, 3);
    maListe = ajouterDebut(maListe, 5);
    maListe = ajouterDebut(maListe, 8);
    maListe = ajouterDebut(maListe, 5);

    printf("Liste initiale :\n");
    afficherListe(maListe);

    printf("\nEntrez la valeur a supprimer de la liste : ");
    scanf("%d", &valeurASupprimer);

    maListe = supprimerElement(maListe, valeurASupprimer);

    printf("\nListe apres suppression de toutes les occurrences de %d :\n", valeurASupprimer);
    afficherListe(maListe);
    

    return 0;
}

