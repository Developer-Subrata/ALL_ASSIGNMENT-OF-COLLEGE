#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 3

void en_Queue();
void d_Queue();
void display();
int rear=-1;
int front=-1;
int de_Queue[MAX];

int main()
 {
 // clrscr();
  int ch;
  printf("\n\t--- Double Ended Queue Using Array ---\n");
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
	    d_Queue();
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
  if(rear==MAX-1)
    {
     printf("\nThe Queue Is Full !!!");
    }
  else
   {
  int data;
  printf("Enter Data : ");
  scanf("%d",&data);
    if(rear==-1)
      {
       rear++;
       front++;
       de_Queue[rear]=data;
      }
    else
     {
     A: int ch,i;
      printf("\n1>> From REAR\t2>> From FRONT\n ---> ");
      scanf("%d",&ch);
      if(ch==1)
	{
	  rear++;
	  de_Queue[rear]=data;
	}
       else if(ch==2)
	{
	 for(i=rear;i>=front;i--)
	   {
	    de_Queue[i+1]=de_Queue[i];
	   }
	 rear++;
	 de_Queue[front]=data;
	}
      else
       {
	goto A;
       }
     }
   }
 }

void d_Queue()
 {
  if(front==-1)
    {
     printf("\nThe Queue Is Empty !!!");
    }
  else
   {
    if(rear==front)
      {
       printf("\n%d Is Deleted From The Queue !!!",de_Queue[front]);
       rear=-1;
       front=-1;
      }
    else
     {
     A: int ch,i;
      printf("\n1>> From REAR\t2>> From FRONT\n ---> ");
      scanf("%d",&ch);
      if(ch==1)
	{
	  printf("\n%d Is Deleted From The Queue !!!",de_Queue[rear]);
	  rear--;
	}
       else if(ch==2)
	{
	  printf("\n%d Is Deleted From The Queue !!!",de_Queue[front]);
	  front++;
	}
      else
       {
	goto A;
       }
     }
   }
 }


void display()
 {
 int i;
// clrscr();
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
	 printf("%d  ",de_Queue[i]);
	}
      }
       else
	{
	 for(i=front;i<=MAX-1;i++)
	   {
	     printf("%d  ",de_Queue[i]);
	   }
	  for(i=0;i<=rear;i++)
	    {
	       printf("%d  ",de_Queue[i]);
	    }
	}
     }
 }
