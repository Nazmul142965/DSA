#include <stdio.h>
#include <stdlib.h>
#define SIZE 4
int front = -1, rear = -1, inp_array[SIZE];
void enqueue();
void dequeue();
void show();
int main()
{
int choice;
while (1)
{
    printf("\nPerform operations on the circular queue:");
    printf("\n1.Enqueue the element\n2.Dequeue the element\n3.Show\n4.End");
    printf("\n\nEnter the choice: ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        enqueue();
        break;
    case 2:
        dequeue();
        break;
    case 3:
show();
break;
case 4:
exit(0);
default:
printf("\nInvalid choice!!");
}
}
}
void enqueue(){
    int x;
    if ((rear + 1) % SIZE == front)
{
printf("\nOverflow!!");
}
else
{
printf("\nEnter the element to be added to the queue: ");
scanf("%d", &x);
if (front == -1 && rear == -1)
{
front = rear = 0;
}
else
{
rear = (rear + 1) % SIZE;
}
inp_array[rear] = x;
}
}
void dequeue()
{
if (front == -1 && rear == -1)
{
printf("\nUnderflow!!");
}
else if (front == rear)
{
printf("\nDequeued element: %d", inp_array[front]);
front = rear = -1;
}
else
{
printf("\nDequeued element: %d", inp_array[front]);
front = (front + 1) % SIZE;
}
}
void show()
{
if (front == -1 && rear == -1)

{
printf("\nQueue is empty!!");
}
else
{
printf("\nElements present in the queue: \n");
int i = front;
while (1)
{
printf("%d\n", inp_array[i]);
if (i == rear)
break;
i = (i + 1) % SIZE;
}
}
}