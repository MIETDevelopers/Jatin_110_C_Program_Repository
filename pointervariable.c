//Pointer variable initialization with the address of another variable and then prints normal variable value and its address using pointer variable. 

#include <stdio.h> //Pre process directive to include standard input output functions header file

int main() //main function body starting
{
    int a;  
    a = 10;
    int *p = &a; 

    // Declaring and initializing the pointer

    //prints the value of 'a'
    printf("%d\n", *p);  
    printf("%d\n", *&a);  

    //prints the address of 'a'
    printf("%u\n", &a);    
    printf("%u\n", p);     
    
    printf("%u\n", &p);    
    //prints address of 'p'
    
    return 0;
}