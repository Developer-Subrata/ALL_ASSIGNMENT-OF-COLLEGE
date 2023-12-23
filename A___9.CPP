#include<stdio.h>
#include<conio.h>

int main()
 {
 // clrscr();
  printf("\n\t--- Sparce Matrix Using Array ---\n");
  int mat[100][100],r,c,i,j;
  printf("\nEnter Number Of Row : ");
  scanf("%d",&r);
 printf("\nEnter Number Of Column : ");
 scanf("%d",&c);
printf("\n  Enter Elements  \n");
for(i=0;i<r;i++)
   {
    for(j=0;j<c;j++)
      {
       printf("\nEnter MAT[%d][%d] Element : ",i,j);
       scanf("%d",&mat[i][j]);
      }
   }
//clrscr();
printf("\n: : : Your Entered Matrix : : :\n\t\t");
 for(i=0;i<r;i++)
   {
    for(j=0;j<c;j++)
      {
       printf("%d ",mat[i][j]);
      }
    printf("\n\t\t");
   }

//Sparce

int count=0,s_mat[3][100],k=0;
for(i=0;i<r;i++)
 {
  for(j=0;j<c;j++)
    {
     if(mat[i][j]!=0)
       {
	s_mat[0][k]=i;
	s_mat[1][k]=j;
	s_mat[2][k]=mat[i][j];
	count++;
	k++;
       }
    }
 }

if(count < (c*r)/2)
 {
printf("\n ***Sparce Matrix*** \n");
printf("ROW\tCOLUMN\tVALUE\n");
  for(k=0;k<count;k++)
    {
      printf(" %d\t  %d\t  %d",s_mat[0][k],s_mat[1][k],s_mat[2][k]);
      printf("\t\n");
    }
 }
else
 {
  printf("\n Not A Sparce Matrix !!!");
 }
getch();
}
