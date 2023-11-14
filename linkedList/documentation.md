# *linkedList.h* Library - Documentation
### - Français

Ce document vise à expliquer et détailler le fonctionnement de la bibliothèque "linkedList.h".

#### I) Initialiser la liste chaînée :
- `LinkedList* linkedListInit(Data* headData)`

   Initialise une nouvelle liste chaînée avec une donnée de tête fournie et renvoie un pointeur vers la nouvelle liste chaînée créée.

#### II) Insertion dans la liste chaînée :
- `void linkedListInsert(LinkedList* linkedList, Data* dataIn)`

   Insère un nouveau nœud avec la donnée fournie à la fin de la liste chaînée.

- `void linkedListInsertTo(LinkedList* linkedList, Data* dataIn, int index)`

   Insère un nouveau nœud avec la donnée fournie à l'index spécifié dans la liste chaînée (ne fonctionne pas pour la tête de liste).

- `void linkedListInsertHead(LinkedList** linkedListAdr, Data* dataIn)`

   Insère un nouveau nœud avec la donnée fournie au début de la liste chaînée. Met à jour le pointeur de la tête.

#### III) Modification dans la liste chaînée :
- `void linkedListModify(LinkedList* linkedList, Data* dataIn, int index)`

   Modifie la donnée à l'index spécifié dans la liste chaînée (ne fonctionne pas pour la tête de liste).

- `void linkedListModifyHead(LinkedList** linkedListAdr, Data* dataIn)`

   Modifie la donnée du nœud de tête dans la liste chaînée.

#### IV) Supprimer un élément de la liste chaînée :
- `void linkedListRmvNode(LinkedList** linkedListAdr, int index)`

   Supprime le nœud à l'index spécifié dans la liste chaînée.

- `void linkedListRmvAll(LinkedList** linkedListAdr)`

   Supprime tous les nœuds de la liste chaînée et libère la mémoire. Met à jour le pointeur de la tête.

#### V) Retourner la taille de la liste chaînée :
- `int linkedListSize(LinkedList* linkedList)`

   Renvoie la taille de la liste chaînée.

#### VI) Afficher la liste chaînée :
- `void linkedListPrint(LinkedList* linkedList)`

   Affiche le contenu de la liste chaînée.

- `void linkedListPrintIndex(LinkedList* linkedList, int index)`

   Affiche le contenu de la liste chaînée à un index spécifié.

**Remarque :** Assurez-vous d'adapter la bibliothèque à votre application en modifiant la structure `Data` et en mettant à jour les fonctions d'affichage en conséquence.

### - English

This document aims to explain and detail the functionality of the "linkedList.h" library.

#### I) Initialize the Linked List:
- `LinkedList* linkedListInit(Data* headData)`

   Initializes a new linked list with a provided head data and returns a pointer to the newly created linked list.

#### II) Insertion in the Linked List:
- `void linkedListInsert(LinkedList* linkedList, Data* dataIn)`

   Inserts a new node with the given data at the end of the linked list.

- `void linkedListInsertTo(LinkedList* linkedList, Data* dataIn, int index)`

   Inserts a new node with the given data at the specified index in the linked list (does not work for the list head).

- `void linkedListInsertHead(LinkedList** linkedListAdr, Data* dataIn)`

   Inserts a new node with the given data at the beginning of the linked list. Updates the head pointer.

#### III) Modification in the Linked List:
- `void linkedListModify(LinkedList* linkedList, Data* dataIn, int index)`

   Modifies the data at the specified index in the linked list (does not work for the list head).

- `void linkedListModifyHead(LinkedList** linkedListAdr, Data* dataIn)`

   Modifies the data of the head node in the linked list.

#### IV) Remove an Element from the Linked List:
- `void linkedListRmvNode(LinkedList** linkedListAdr, int index)`

   Removes the node at the specified index in the linked list.

- `void linkedListRmvAll(LinkedList** linkedListAdr)`

   Removes all nodes in the linked list and frees the memory. Updates the head pointer.

#### V) Return the Size of the Linked List:
- `int linkedListSize(LinkedList* linkedList)`

   Returns the size of the linked list.

#### VI) Display the Linked List:
- `void linkedListPrint(LinkedList* linkedList)`

   Prints the content of the linked list.

- `void linkedListPrintIndex(LinkedList* linkedList, int index)`

   Prints the content of the linked list at a specified index.

**Note:** Ensure to adapt the library for your application by changing the `Data` structure and updating the print functions accordingly.

*Zeug555 - 14/11/23*