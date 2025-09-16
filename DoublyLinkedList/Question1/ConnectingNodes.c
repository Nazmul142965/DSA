#include<stdio.h>
#include<stdlib.h>

struct node{
int data;
struct node *next;
struct node *prev;
};
int main(){

struct node *head = NULL;
struct node *m = NULL;
struct node *n = NULL;
struct node *o = NULL;
struct node *p = NULL;
struct node *q = NULL;

m = malloc(sizeof(struct node));
n = malloc(sizeof(struct node));
o = malloc(sizeof(struct node));
p = malloc(sizeof(struct node));
q = malloc(sizeof(struct node));

printf("Enter data for node m: ");
scanf("%d", &m->data);

printf("Enter data for node n: ");
scanf("%d", &n->data);
printf("Enter data for node o: ");
scanf("%d", &o->data);
printf("Enter data for node p: ");
scanf("%d", &p->data);
printf("Enter data for node q: ");
scanf("%d", &q->data);

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

printf("Linked list:\n");
struct node *temp = m;
while(temp){
printf("%d", temp->data);
if(temp->next){

printf(" <-> ");
}
temp = temp->next;
}
return 0;
}