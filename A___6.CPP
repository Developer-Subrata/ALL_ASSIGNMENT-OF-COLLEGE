#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<stdlib.h>

void create();
void insert_1st();
void delet_last();
void display();
struct node
 {
  int data;
  struct node *next;
 };
struct node *head=NULL;

int main()
 {
 // clrscr();
while(1)
 {
 A: printf("\n\t--- Singly Linked List ---");
   int ch;
  if(head==NULL)
  {
   printf("\n1>> CREATE\t2>> EXIT\n ---> ");
   scanf("%d",&ch);
   if(ch==1)
    {
     create();
    }
  else if(ch==2)
    {
     exit(0);
    }
  else
   {
    printf("\n Wrong Choice !!!");
    getch();
    goto A;
   }
  }
 else
  {
   printf("\n1>> INSERT_1st\t2>> DELETE_last\t3>> DISPLAY\t4>> EXIT\n ---> ");
   scanf("%d",&ch);
   switch(ch)
    {
     case 1:
	   insert_1st();
	   break;
     case 2:
	   delet_last();
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
 getch();
 }
}
void create()
 {
  int ch;
 do {
  struct node *newnode,*temp;
  newnode=(struct node*)malloc(sizeof(struct node));
 printf("\nEnter Data : ");
 scanf("%d",&newnode->data);
 newnode->next=NULL;
  if(head==NULL)
   {
    head=temp=newnode;
   }
  else
   {
    temp->next=newnode;
    temp=temp->next;
   }
 printf("\nDo You Want To Create More Node ? [1/0]\n ---> ");
 scanf("%d",&ch);
 }while(ch==1);
}
void insert_1st()
 {
  struct node *newnode=(struct node*)malloc(sizeof(struct node));
  printf("\nEnter Data : ");
  scanf("%d",&newnode->data);
  newnode->next=head;
  head=newnode;
 }
void delet_last()
 {
  struct node*temp=head;
  if(head==NULL)
   {
    printf("\nDeletion Not Possible [ Empty List !!! ]");
    return;
   }
  else if(head->next==NULL)
   {
   printf("\n%d Is Deleted From List !!!",temp->data);
   free(temp);
   }
  else
   {
    while(temp->next->next!=NULL)
     {
      temp=temp->next;
     }
    printf("\n%d Is Deleted From List !!!",temp->next->data);
   free(temp->next);
   temp->next=NULL;
   }
 }
void display()
 {
  struct node *temp=head;
  if(head==NULL)
   {
    printf("\nThe List Is Empty !!!");
   }
  else
   {
  // clrscr();
   printf("Your List : ");
    while(temp->next!=NULL)
     {
      printf("%d -> ",temp->data);
     temp=temp->next;
     }
   printf("%d",temp->data);
   }
 }