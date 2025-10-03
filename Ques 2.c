#include <stdio.h>
#include <stdlib.h>

// Définition d'un nœud
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Insertion dans une liste simplement chaînée triée
Node* insererTrie(Node* head, int valeur) {
    Node* nouveau = malloc(sizeof(Node));
    nouveau->data = valeur;
    nouveau->next = NULL;

    // Insertion en tête si la liste est vide ou valeur plus petite
    if (head == NULL || valeur < head->data) {
        nouveau->next = head;
        return nouveau;
    }

    // Sinon on parcourt pour trouver la bonne position
    Node* courant = head;
    while (courant->next != NULL && courant->next->data < valeur) {
        courant = courant->next;
    }

    // Insertion à la bonne place
    nouveau->next = courant->next;
    courant->next = nouveau;

    return head;
}

// Affichage de la liste
void afficherListe(Node* head) {
    Node* tmp = head;
    while (tmp != NULL) {
        printf("%d -> ", tmp->data);
        tmp = tmp->next;
    }
    printf("NULL\n");
}

// Fonction principale
int main() {
    Node* head = NULL;
    int valeur, choix;

    do {
        printf("Entrez une valeur à insérer : ");
        scanf("%d", &valeur);
        head = insererTrie(head, valeur);

        printf("Liste actuelle : ");
        afficherListe(head);

        printf("Voulez-vous insérer une autre valeur ? (1 = Oui, 0 = Non) : ");
        scanf("%d", &choix);
    } while (choix == 1);

    return 0;
}
