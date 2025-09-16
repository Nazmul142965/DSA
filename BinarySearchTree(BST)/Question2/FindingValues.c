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
// Function to search for a value in the binary search tree
Node* search(Node* root, int key) {
// Base case: root is NULL or key is present at root
if (root == NULL) {
return 0;
}
if(root->data == key)
{
return 1;
}
// Key is greater than root's data

if (key > root->data) {
return search(root->right, key); // Search in the right subtree
}
// Key is smaller than root's data
return search(root->left, key); // Search in the left subtree
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

//finding value
int choice = 0;
while(1){

int key;
printf("\nYour Choices:\n");
printf("1.Enter a value.\n");
printf("2.Exit.\n");
printf("Enter your choice: \n");
scanf("%d", &choice);
if(choice == 1)
{
printf("\nEnter the value you want to find:\n");
scanf("%d", &key);
}
else if(choice == 2)
{
break;
}
search(root, key);
if(search(root, key)){
printf("True");
}
else{
printf("False");
}
}
return 0;
}