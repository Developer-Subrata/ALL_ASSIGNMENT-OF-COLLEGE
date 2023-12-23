#include<stdio.h>
#include<conio.h>
//#include<alloc.h>
#include<stdlib.h>

void create();
void insert();
void display();
struct node
 {
  int data;
  struct node *next;
 };
struct node *head=NULL;

int main()
 {
  //clrscr();
   printf("\n\t--- Singly Linked List ---\n\n");
  int ch;
 while(1)
 {
A: printf("\n1>> CREATE\t2>> INSERT_ANY\t3>> DISPLAY\t4>> EXIT\n ---> ");
  scanf("%d",&ch);
  switch(ch)
   {
    case 1:
	create();
	break;
    case 2:
	if(head==NULL)
	  {
printf("\nYou Have Not Created Any List !!! \n[ Please Create Atleast One Node For Insert AnyWhere ]\n");
	  getch();
	  goto A;
	  }
	 else
	  {
	   insert();
	  }
       break;
    case 3:
	display();
	break;
    case 4:
	 exit(0);
    default :
	printf("\nEnter Correct Choice !!!");
   }
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
    temp=newnode;
   }
 printf("\nDo You Want More Node ? [1/0]\n ---> ");
 scanf("%d",&ch);
 }while(ch==1);
}
void insert()
 {
  struct node *temp=head;
  struct node *newnode=(struct node*)malloc(sizeof(struct node));
  printf("\nEnter Data : ");
  scanf("%d",&newnode->data);
  newnode->next=NULL;
  printf("\nEnter Data Where You Want To Insert : ");
  int pos,flag=0,bf;
  scanf("%d",&pos);
  printf("1>> BEFORE\t 2>> AFTER \n --> ");
  scanf("%d",&bf);
 if(bf==1)
 {
  if(head->data==pos)
   {
    newnode->next=head;
    head=newnode;
    return;
   }
  while(temp!=NULL && flag==0)
   {
    if(temp->next->data==pos)
     {
      newnode->next=temp->next;
      temp->next=newnode;
      flag=1;
     }
    temp=temp->next;
   }
 }
 else
  {
   if(bf==2)
    {
     while(temp!=NULL)
      {
       if(temp->next==NULL)
	{
	 temp->next=newnode;
	 return;
	}
       if(temp->data==pos)
	{
	 newnode->next=temp->next;
	 temp->next=newnode;
	 return;
	}
      temp=temp->next;
      }
    }
  }
}

void display()
 {
  //clrscr();
  struct node *temp=head;
  if(head==NULL)
   {
    printf("\nThe List Is Empty !!!");
    return;
   }
  else
   {
   printf("\n\tYour List : ");
    while(temp->next!=NULL)
     {
      printf("%d -> ",temp->data);
     temp=temp->next;
     }
   printf("%d",temp->data);
   }
 }