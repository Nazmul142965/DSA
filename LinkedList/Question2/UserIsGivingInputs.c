#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node*next;
};
int main(){
struct node *head = NULL;
struct node *p = NULL;
struct node *q = NULL;
struct node *r = NULL;
struct node *s = NULL;
struct node *t = NULL;
p = malloc(sizeof(struct node));
q = malloc(sizeof(struct node));
r = malloc(sizeof(struct node));
s = malloc(sizeof(struct node));
t = malloc(sizeof(struct node));

head = p;
p->next = q;
q->next = r;
r->next = s;
s->next = t;
t->next = NULL;

struct node *current = head;
printf("Enter the number:\n");
while(current != NULL){
scanf("%d", &current->data);
current = current->next;
}
printf("Linked list: ");
struct node *temp = p;
while(temp){
printf("%d", temp->data);
if(temp->next){
printf(" -> ");
}
temp = temp->next;
}
return 0;
}