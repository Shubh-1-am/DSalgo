#include <stdlib.h>
#include "node.h"

void circularDoubleLinkedList();

Node* insertNode (Node* tail, int data, size_t index);

Node* deleteNode (Node* tail, size_t index);

Node* deleteList (Node* tail);

void displayList (Node* tail);

void displayReversedList (Node* tail);
