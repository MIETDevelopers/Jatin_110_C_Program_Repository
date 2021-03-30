// 1D and 2D arrays passed as arguments to a single function and the function implementation should simply print those arrays passed as arguments


#include <stdio.h> //Pre Process directive to include standard input output function header file
void disp( char ch)
{
   printf("%c ", ch);
}
int main() //main function body starting
{
   char arr[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'}; // Array Declaration
   for (int x=0; x<10; x++)
   {
       /* I’m passing each element one by one using subscript*/
       disp (arr[x]);
   }

   return 0;
}