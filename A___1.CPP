#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<malloc.h>

void push(int);
void pop();
void display();
struct node
 {
  int data;
  struct node *next;
 };
struct node *tos=NULL;

int main()
 {
  //clrscr();
  printf("\n\t--- Stack Implementation Using Linked List ---\n");
  int ch,value;
while(1) {
  printf("\n1>> PUSH\t2>> POP\t3>> DISPLAY\t4>> EXIT\n ---> ");
  scanf("%d",&ch);
 switch(ch)
  {
   case 1:
	printf("\nEnter Data : ");
	scanf("%d",&value);
	push(value);
	break;
   case 2:
	pop();
	break;
   case 3:
	display();
	break;
   case 4:
	exit(0);
   default :
	printf("\nWrong Choice !!!");
  }
 }
}
void push(int value)
 {
  struct node *newnode=(struct node*)malloc(sizeof(struct node));
  newnode->data=value;
  if(tos==NULL)
   {
     newnode->next=NULL;
     tos=newnode;
   }
  else
   {
    newnode->next=tos;
    tos=newnode;
   }
 }
void pop()
 {
  struct node *temp=tos;
  if(tos==NULL)
    {
     printf("\nStack Is UnderFlow !!!");
    return;
    }
   else
    {
      printf("\n%d Is Popped Out From Stack !!!",temp->data);
      tos=tos->next;
      free(temp);
    }
 }
void display()
 {
  //clrscr();
  struct node *temp=tos;
  if(tos==NULL)
   {
    printf("\nStack Is UnderFlow !!!");
    return;
   }
 else
  {
   printf("\nStatus Of Stack : ");
   while(temp!=NULL)
     {
       printf("\n |%d| ",temp->data);
       temp=temp->next;
     }
  }
 }