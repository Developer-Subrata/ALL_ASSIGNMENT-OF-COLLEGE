#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 3

void en_Queue();
void de_Queue();
void display();
int rear=-1;
int front=-1;
int c_Queue[MAX];

int main()
 {
 // clrscr();
  int ch;
  printf("\n\t--- Circular Queue Using Array ---\n");
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
  int n;
  if((rear==MAX-1 && front==0) || front==rear+1)
   {
    printf("\n The Queue Is OverFlow !!!");
   }
  else
   {
    printf("Enter An Element : ");
    scanf("%d",&n);
     if(rear==-1)
       {
	rear++;
	front++;
	c_Queue[rear]=n;
       }
      else
       {
	rear=(rear+1)%MAX;
	c_Queue[rear]=n;
       }
   }
 }
void de_Queue()
 {
  if(rear==-1)
    {
     printf("\nThe Queue Is UnderFlow !!!");
    }
   else
    {
     if(front==rear)
       {
	printf("\n %d Is Deleted From The Queue !!!",c_Queue[front]);
	rear=front=-1;
       }
      else
       {
	printf("\n%d Is Deleted From The Queue !!!",c_Queue[front]);
	front=(front+1)%MAX;
       }
    }
 }
void display()
 {
 int i;
 //clrscr();
    if(rear==-1)
    {
     printf("\nThe Queue Is UnderFlow !!!");
    }
  else
   {
    printf("Queue : ");
    if(rear>=front)
     {
      for(i=front;i<=rear;i++)
	{
	 printf("%d  ",c_Queue[i]);
	}
      }
       else
	{
	 for(i=front;i<=MAX-1;i++)
	   {
	     printf("%d  ",c_Queue[i]);
	   }
	  for(i=0;i<=rear;i++)
	    {
	       printf("%d  ",c_Queue[i]);
	    }
	}
     }
 }