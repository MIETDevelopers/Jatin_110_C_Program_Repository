// PROGRAM TO CALCULATE THE SUM OF 2D ARRAY
// Written by -- jatin
//30-03-2021


#include <stdio.h> //Pre-Process directive to include standard input output header file
#define MAXROW    10
#define MAXCOL    10

int main() //main function body starting
{
  int matrix[MAXROW][MAXCOL];
  int i,j,r,c;
  int sum,product;
  
  printf("Enter number of Rows :");
  scanf("%d",&r);
  printf("Enter number of Columns :");
  scanf("%d",&c);

  printf("\nEnter matrix elements :\n");
  //Input elements of the matrix
  for(i=0;i< r;i++)
  {
    for(j=0;j< c;j++)
    {
      printf("Enter element [%d,%d] : ",i+1,j+1);
      scanf("%d",&matrix[i][j]);
    }
  }


  //Sum and product of all elements.
  //Initializing sum and product variables.
  sum=0;
  product =1;
  for(i=0;i< r;i++)
  {
    for(j=0;j< c;j++)
    {
      sum   +=  matrix[i][j];
      product *=  matrix[i][j];
    }
  
  }

  printf("\nSum of all elements : %d \nProduct of all elements :%d",sum,product);
  return 0; 

}