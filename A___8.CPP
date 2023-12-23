#include<stdio.h>
#include<conio.h>

void insertion_sort(int[],int);

int main()
 {
 // clrscr();
  int arr[100],n,i;
  printf("\n\t--- Insertion Sort Using Array ---");
  printf("\nEnter The Size Of Array : ");
  scanf("%d",&n);
  printf("\nEnter %d Elements : \n",n);
  for(i=0;i<n;i++)
   {
    scanf("%d",&arr[i]);
   }
 printf("\nArray Before Sorting : ");
 for(i=0;i<n;i++)
   {
    printf("%d ",arr[i]);
   }
 insertion_sort(arr,n);
 printf("\nAfter Sorting : ");
  for(i=0;i<n;i++)
   {
    printf("%d ",arr[i]);
   }
getch();
 }
void insertion_sort(int arr[],int n)
 {
  int i,j,temp;
  for(i=1;i<n;i++)
    {
     temp=arr[i];
     j=i-1;
     while(j>=0 && temp<arr[j])
       {
	arr[j+1]=arr[j];
	j=j-1;
       }
     arr[j+1]=temp;
    }
 }
