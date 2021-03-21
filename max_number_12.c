//Program to find maximum of n number using for loop.
#include<stdio.h>//header file
int main()//main function
{
  int n,num,i;
  int big;
  
  printf("Enter the values of n: ");
  scanf("%d",&n);//scanning input.
 
  printf("Number %d",1);
  scanf("%d",&big);

  for(i=2;i<=n;i++)//for loop.
  {
    printf("Number %d: ",i);
    scanf("%d",&num);

    if(big<num)//checking condition
      big=num;
  }
  
  printf("Largest number is: %d",big);//output.

  return 0;
}
