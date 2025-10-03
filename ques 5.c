#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
	int age;
	struct Node* next;
	struct Node* prev;
}Node;

Node* createNode (int value){
	Node* newNode = (Node*)malloc(sizeof(Node));
	newNode->age = value;
	newNode->next = NULL;
	newNode->prev = NULL;
	
	return newNode;
}
Node* insertHead (Node* head ,int value){
	Node* newNode = createNode ( value);
	
	if (head == NULL){
		return newNode;
	}
	Node* last = head->prev ;
	
	newNode->next = head;
	newNode->prev = last;
	head->prev = newNode;
	last->next = newNode;
	head = newNode;
	
	return head;
}
Node* insertEnd (Node* head ,int value){
	Node* newNode = createNode ( value);
	
	if (head == NULL){
		return newNode;
	}
	Node* last = head->prev ;
	
	newNode->next = head;
	newNode->prev = last;
	last->next = newNode;
	head->prev = newNode;
	head = newNode;
	
	return head;
}

 void Afficher(Node* head){
	if(head == NULL){
		printf("liste vide\n");
		return;
	}
	Node*temp = head;
	printf("liste:");
	do{
		printf("%d <->",temp->age);
		temp = temp->next;
	}while (temp != head);
	printf ("(retour au debut)\n");
}

//programme principale//

int main() {
    Node* head = NULL;
    int choix, age;

    do {
        printf("\n===== MENU =====\n");
        printf("1. Insertion en tête\n");
        printf("2. Insertion en queue\n");
        printf("3. Afficher la liste\n");
        printf("4. Quitter\n");
        printf("Votre choix : ");
        scanf("%d", &choix);

        switch (choix) {
            case 1:
                printf("Âge à insérer en tête : ");
                scanf("%d", &age);
                head = insertHead(head, age);
                break;
            case 2:
                printf("Âge à insérer en queue : ");
                scanf("%d", &age);
                head = insertEnd(head, age);
                break;
            case 3:
                Afficher(head);
                break;
            case 4:
                printf("Fin du programme.\n");
                break;
            default:
                printf("Choix invalide !\n");
        }
    } while (choix != 4);

    return 0;
}












