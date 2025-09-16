#include<stdio.h>
#include<stdlib.h>

struct node{
int data;
struct node*next;
};
int main(){
int n, i;
printf("Enter the node number:\n");
scanf("%d", &n);

struct node *head = NULL;
struct node *ptr = NULL;
struct node *newNode;
printf("Enter the data\n");
for(i = 0; i < n; i++){

newNode = malloc(sizeof(struct node));
scanf("%d", &newNode->data);
newNode->next = NULL;
if( head == NULL){
head = newNode;
ptr = head;
} else{
ptr->next = newNode;

ptr = newNode;
}
}
printf("\n");
printf("Link list: ");
struct node *temp = head;
while(temp){
printf("%d", temp->data);
if(temp->next){
printf(" -> ");
}
temp = temp->next;
}
return 0;
}