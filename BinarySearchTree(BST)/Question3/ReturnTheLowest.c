#include <stdio.h>
#include <stdlib.h>

// Define the structure for a tree node
typedef struct Node {
int data;
struct Node* left;
struct Node* right;
}Node;
// Function to create a new node
Node* createNode(int data) {
Node* newNode = (struct Node*)malloc(sizeof(struct Node));
newNode->data = data;
newNode->left = NULL;
newNode->right = NULL;
return newNode;
}
// Function for in-order traversal
void inorderTraversal(Node* root) {
if (root == NULL) return;

inorderTraversal(root->left);
printf("%d ", root->data);
inorderTraversal(root->right);
}

// Function to insert a new node in the binary tree
Node* insert(Node* root, int data) {
if (root == NULL) {
return createNode(data);
}
if (data < root->data) {
root->left = insert(root->left, data);
} else {
root->right = insert(root->right, data);
}
return root;
}
// Function to find the lowest (minimum) value in the binary search tree
int findMinValue(struct Node* root) {
struct Node* current = root;
// Loop down to find the leftmost leaf (smallest value)
while (current && current->left != NULL) {
current = current->left;
}
return current->data;
}
int main() {
Node* root = NULL;

// Insert nodes into the binary tree
root = insert(root, 35);

insert(root, 50);
insert(root, 40);
insert(root, 25);
insert(root, 30);
insert(root, 60);
insert(root, 78);
insert(root, 20);
insert(root, 28);

// Perform in-order traversal
printf("In-order traversal of the binary tree:\n");
inorderTraversal(root);

printf("\nThe minimum value:\n");
printf("%d",findMinValue(root) );

return 0;
}