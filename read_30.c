//Program to read a file
#include <stdio.h>
#include <stdlib.h>

int main()
{
   char cha[100];
   FILE *fptr;//declaraing a file type variable
   if ((fptr = fopen("./txt.txt","r")) == NULL)//opening file in read mode
   {
       printf("Error! opening file");
       exit(1);
   }

   fscanf(fptr, "%[^\n]", cha);
   printf("%s", cha);
   fclose(fptr); 
  
   return 0 ;
 } 