#include<stdio.h>
#include<conio.h>

int insert(int[],int,int,int);
int main()
 {
  //clrscr();
  printf("\n\t--- Array Insertion Program ---\n");
  int arr[100],n,ele,pos,i,n_n;
  printf("\nEnter, Initially How Many Element You Want : ");
  scanf("%d",&n);
  printf("\nEnter %d Elements : ",n);
  for(i=0;i<n;i++)
   {
    scanf("%d",&arr[i]);
   }
 printf("\nBefore Insertion : ");
 for(i=0;i<n;i++)
   {
    printf(" %d ",arr[i]);
   }
printf("\nEnter Which Element You Want To Insert Now : ");
scanf("%d",&ele);
printf("\nEnter Which Position You Want To Insert Now : ");
scanf("%d",&pos);
n_n=insert(arr,n,ele,pos);
printf("\nAfter Insertion : ");
 for(i=0;i<n_n;i++)
   {
    printf(" %d ",arr[i]);
   }
  getch();
 }
int insert(int arr[],int n,int ele,int pos)
  {
   int i;
   for(i=n-1;i>=pos;i--)
     {
      arr[i+1]=arr[i];
     }
  arr[pos]=ele;
  return (n+1);
  }