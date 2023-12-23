#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<stdlib.h>

void en_Queue();
void de_Queue();
void display();

struct node
 {
  int data;
  struct node *next;
 };
 struct node *rear=NULL;
 struct node *front=NULL;
int main()
 {
    //clrscr();
  int ch;
  printf("\n--- Linear Queue Using Linked List ---");
  while(1)
    {
     printf("\n1>> Insert\t2>> Delete\t3>> Display\t4>> Exit\n --> ");
     scanf("%d",&ch);
     switch(ch)
      {
       case 1:
	     en_Queue();
	     break;
       case 2:
	    de_Queue();
	    break;
       case 3:
	     display();
	     break;
       case 4:
	     exit(0);
       default :
	       printf("\nWrong Input !!!");
      }
    }
  getch();
 }
void en_Queue()
 {
  struct node *newnode=(struct node*)malloc(sizeof(struct node));
  printf("Enter Data To Insert : ");
  scanf("%d",&newnode->data);
  newnode->next=NULL;
  if(rear==NULL)
    {
     rear=front=newnode;
    }
  else
   {
    rear->next=newnode;
    rear=newnode;
   }
 }
void de_Queue()
 {
   struct node *temp=front;
  if(front==NULL)
    {
     printf("\nThe Queue Is Empty !!!");
    }
   else
    {
     if(rear==front)
     {
      printf("%d Is Deleted !!!",front->data);
      rear=front=NULL;
     }
    else
     {
      printf("%d Is Deleted !!!",front->data);
      front=front->next;
      free(temp);
     }
  }
}
void display()
 {
 //clrscr();
  struct node *temp=front;
   if(front==NULL)
    {
     printf("\nThe Queue Is Empty !!!");
    }
   else
    {
    printf("\nQUEUE : ");
     while(temp!=NULL)
      {
       printf("%d ",temp->data);
       temp=temp->next;
      }
    }
 }