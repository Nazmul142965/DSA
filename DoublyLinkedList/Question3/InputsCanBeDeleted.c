#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node in the linked list
struct node {
int data;
struct node *next;
struct node *prev;
};

// Function to delete a node at a given location (position) in the list
void deleteAtPosition(struct node **head, int position) {
if (*head == NULL) {
printf("List is empty.\n");
return;
}

struct node *temp = *head;

// If the head node itself is to be deleted
if (position == 0) {
*head = temp->next; // Change head
free(temp); // Free the old head
return;
}

// Traverse the list to find the node just before the target node
for (int i = 0; temp != NULL && i < position - 1; i++) {
temp = temp->next;
}

// If position is more than the number of nodes
if (temp == NULL || temp->next == NULL) {
printf("Position out of range.\n");
return;
}

// Update pointers to unlink the node from the list
if (temp->next != NULL) {
temp->next->prev = temp->prev;
}
if (temp->prev != NULL) {
temp->prev->next = temp->next;
}

free(temp); // Free the memory of the node to be deleted
}

// Function to print the linked list
void printList(struct node *head) {
struct node *temp = head;
printf("Doubly Linked List: ");

while (temp != NULL) {
printf("%d", temp->data);
if (temp->next != NULL) {
printf(" <-> ");
}
temp = temp->next;
}
printf("\n");
}

int main() {
// Initialize nodes
struct node *head = NULL;
struct node *m = NULL;
struct node *n = NULL;
struct node *o = NULL;
struct node *p = NULL;
struct node *q = NULL;

// Allocate memory for nodes
m = malloc(sizeof(struct node));
n = malloc(sizeof(struct node));
o = malloc(sizeof(struct node));
p = malloc(sizeof(struct node));
q = malloc(sizeof(struct node));

// Assign data to nodes
m->data = 7;
n->data = 5;
o->data = 13;
p->data = 10;
q->data = 11;

// Connect nodes
head = m;
m->next = n;
m->prev = NULL;
n->next = o;
n->prev = m;
o->next = p;
o->prev = n;
p->next = q;
p->prev = o;
q->next = NULL;
q->prev = p;

// Print the original linked list
printf("Original List:\n");
printList(head);

// Take user input for the position to delete
int position;
printf("Enter the position to delete: ");

scanf("%d", &position);

// Delete the node at position
deleteAtPosition(&head, position);

// Print the modified linked list
printf("\nList after deletion at position :\n");
printList(head);

return 0;
}