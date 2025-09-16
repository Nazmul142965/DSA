#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node in the linked list
struct node {
int data;
struct node *next;
struct node *prev;

};

// Function to delete the first node that contains a given value
void deleteByValue(struct node **head, int value) {
struct node *temp = *head;
struct node *prev = NULL;

// If the head node itself holds the value to be deleted
if (temp != NULL && temp->data == value) {
*head = temp->next; // Change head
free(temp); // Free the old head
return;
}

// Traverse the list to find the node containing the given value
while (temp != NULL && temp->data != value) {
prev = temp;
temp = temp->next;
}
// If the value was not found in the list
if (temp == NULL) {
printf("Value %d not found in the list.\n", value);
return;
}

// Unlink the node from the list
prev->next = temp->next;

// Free memory for the node to be deleted
free(temp);
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

// Take user input for the value to delete
int value;
printf("Enter the value to delete: ");
scanf("%d", &value);

// Delete the node with value
deleteByValue(&head, value);

// Print the modified linked list
printf("\nList after deletion of node with value :\n");
printList(head);

return 0;
}