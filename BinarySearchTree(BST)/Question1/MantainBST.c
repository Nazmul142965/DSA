#include <stdio.h>
#include <stdlib.h>

// Define the structure for a tree node
struct Node {
int data;
struct Node* left;
struct Node* right;
};

// Function to create a new node
struct Node* createNode(int data) {
struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
newNode->data = data;
newNode->left = NULL;
newNode->right = NULL;
return newNode;
}

// Function for in-order traversal
void inorderTraversal(struct Node* root) {
if (root == NULL) return;

inorderTraversal(root->left);
printf("%d ", root->data);
inorderTraversal(root->right);

}

// Function to insert a new node in the binary tree
struct Node* insert(struct Node* root, int data) {
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

int main() {
struct Node* root = NULL;

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

return 0;
}