#include<stdio.h> //Pre-Process directive to include standard input output header file
int main() //main fuction body starting
{
   int n, i, count = 0; //variable declarartion 
 
    printf("Enter the Number.\n");
    scanf("%d",&n);//scanning the number entered by user.
 
    for(i=2; i<=n/2; ++i)
    {
        //Checking for non prime number
        if(n%i==0)
        {
            count=1;
            break;
        }
    }
    // output.
   // if the condition is true, it will print the prime number
    if (count==0)
        printf("%d is a Prime number.",n); 
    else
        printf("%d is not a Prime number.",n);
 
    return 0;    
}