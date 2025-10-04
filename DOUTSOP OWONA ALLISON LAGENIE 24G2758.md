TP2 INF231: STRUCTURES DE DONNEES 2

Dans la question 4 il etait question de faire l'insertion en tete et l'insertion en queue dans une liste simplement chainee circulaire.
Tout d'abord nous avons cree une liste contenant les ages et chaque age a son id.

Le fichier est constituee de cinq fonctions:
  -insert_tete: dans laquelle nous avons cree un nouveau pointeur qui pointe vers une nouvelle cellule et allouer un espace par la suite verifier si l'espace a vraiment ete allouer sinon arreter la fonction ,ensuite remplir les champs age et id puis inserer en tete .Pour l'insertion si la liste des ages est vide inserer la nouvelle cellule qui deviendra la tete de la liste sinon rechercher la derniere cellule de la liste qui est derniere->suivant=premiere inserer la nouvelle cellule qui sera la nouvelle tete de liste. A la fin de la fonction on retourne la noouvelle tete de liste.
  -insert_fin: ici on cree toute un nouveau pointeur qui pointe sur une nouvelle cellule qu'on alloue puis verifie l'allocation memoire et remplis les champs age et id.Pour l'insertion si la liste est vide inserer la nouvelle cellule qui devient la tete de la liste sinon rechercher la derniere cellule puis inserer la nouvelle telle que est devienne la queue de la liste. Enfin retourner la tete de la liste.
  -affiche: qui permet d'afficher les elements de chaque cellule,on cree un nouveau pointeur a qui on affectera la tete de la liste qui servira a parcourir la liste et afficher les elements de chaque cellule.
  -preuve_circulaire: ou l'on recupere le nombre de cellule inserer , on entre dans une boucle qui affichera les cellules en commencant par la tete jusqu'a la queue plus cinq cellules ce qui nous permettra de voir que la liste est belle et bien circulaire.
  -menu: comme son l'indique affichera le menu des fonctions si apres enfin de choisir l'operation a menee qui sera appele dans le main.
Dans le main on recupere l'information age et le choix du menu,une fontion imbriquee qui affichera le menu jusqu'a ce que l'utilisateur entre un choix indisponible, suite a l'utilisation des fonctions insert_tete et insert_fin on incremente l'id.
