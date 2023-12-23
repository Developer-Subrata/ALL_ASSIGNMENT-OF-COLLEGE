#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct node
{
    int data;
    struct node *pre, *next;
};
struct node *tail = NULL;
struct node *head = NULL;

void create();
void delet_any();
void display();

int main()  {
 //clrscr();
    printf("\n--- Doubly Linked List ---\n");
    while (1)    {
	printf("\n1>> CREATE\t2>> DELETE_ANY\t3>>DISPLAY\t4>> EXIT\n ---> ");
	int ch;
	scanf("%d", &ch);
	if (ch == 1)  {
	    create();
	}
       else if (ch == 2)  {
	    delet_any();
	}
	else if (ch == 3)  {
	    display();
	}
	else if (ch == 4)  {
	    exit(0);
	}
	else  {
	    printf("Wrong Choice !!!\n");
	}
    }
}

void create()  {
  int ch;
    do{
      struct node *newnode=(struct node*)malloc(sizeof(struct node));
      printf("\nEnter Value : ");
      scanf("%d",&newnode->data);
      newnode->pre=newnode->next=NULL;
      if(head==NULL)
	{
	 head=tail=newnode;
	}
      else   {
	if(head==tail)
	  {
	   head->next=newnode;
	   newnode->pre=head;
	   tail=newnode;
	  }
	 else
	  {
	   newnode->pre=tail;
	   tail->next=newnode;
	   tail=newnode;
	  }
       }
    printf("\nDo You Want To Create More Node ? [1/0] \n---> ");
    scanf("%d",&ch);
    }while(ch==1);
 }

void display()  {
    struct node *temp;
    if(head==NULL)    {
	printf("\n The List Is Empty !!!");
	return;
      }
    else   {
    // clrscr();
     int ch;
    A: printf("\n1>> From HEAD\t2>> From TAIL\n---> ");
       scanf("%d",&ch);
       printf("\n--- Doubly List ---\n");
       if(ch==1) {
	  temp=head;
	  while(temp->next!=NULL)    {
	     printf(" %d<-->",temp->data);
	     temp=temp->next;
	    }
	  printf("%d",temp->data);
	 }
      else if(ch==2)  {
	  temp=tail;
	  while(temp->pre!=NULL)    {
	     printf("%d<-->",temp->data);
	     temp=temp->pre;
	    }
	  printf("%d",temp->data);
	 }
      else   {
	goto A;
       }
     }
  }

void delet_any()   {
    struct node *temp;
    if(head==NULL)    {
	printf("\n The List Is Empty !!!");
	return;
      }
    else  {
      if(head==tail)  {
	 temp=head;
	 printf("\n %d Is Deleted !!!",head->data);
	 head=tail=NULL;
	 free(temp);
	}
      else   {
	int value;
	printf("\nEnter Which Element You Want To Delete : ");
	scanf("%d",&value);
	if(head->data==value)  {
	   temp=head;
	   printf("\n %d Is Deleted !!!",temp->data);
	   head=head->next;
	   head->pre=NULL;
	   free(temp);
	  }
	else if(tail->data==value) {
	  temp=tail;
	  printf("\n %d Is Deleted !!!",temp->data);
	  tail=tail->pre;
	  tail->next=NULL;
	  free(temp);
	 }
       else  {
	 temp=head;
	  while(temp!=NULL)    {
	      if(temp->data==value)  {
		 printf("\n %d Is Deleted !!!",temp->data);
		 temp->pre->next=temp->next;
		 temp->next->pre=temp->pre;
		 free(temp);
		 break;
		}
	      temp=temp->next;
	    }
	}
       }
     }
  }


