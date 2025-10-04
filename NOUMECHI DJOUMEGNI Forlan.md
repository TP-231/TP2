# TP INF231: Structures de données 2
# Etudiante NOUMECHI DJOUMEGNI Forlan 24G2903
## Devoir n°1
Dans cette exercice, il était question d'écrire un programme C qui lit un élément et supprime toutes ses occurrences dans une liste simplement chaînée et il correspond au fichier **Occurence.c**. 


Notre programme est constitué de 3 fonctions et du **main**. Tout d'abord, nous avons créer une liste chaînée, ensuite nous avons écris les fonctions qui constituent notre programme. Ces fonctions sont: 
- ajouterDebut(): Ici, la fonction ajoute un nouvel élément au début de la liste chaînée, afin de remplir la liste avec les éléments qu'on veut.
- afficherListe(): On parcourt et on affiche tous les éléments de la liste chaînée, de la tête à la queue.
- supprimerElement(): la fonction supprime toutes les occurrences de la valeur spécifiée de manière récursive.
Dans le main, on initialise une liste chaînée vide et les éléments sont ajoutés au début en utilisant ajouterDebut(). Grâce à la fonction afficherListe(), la liste est affichée. L'utilisateur est donc invitévà saisir la valeur à supprimer et la fonction supprimerElement() est appelée pour supprimer les occurrences de cette valeur de la liste, le pointeur tête maliste est mis à jour avec le résultat de la suppression. À la fin du programme, un message est affichée pour confirmer la suppression de la valeur désignée.