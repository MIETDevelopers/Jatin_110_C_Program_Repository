//Simple calculator using switch case
#include <stdio.h>//header file
//function declaration
float add(float a, float b);
float sub(float a, float b);
float multi(float a, float b);
float div(float a, float b);

int main()//main funtion
{
    char Operator;
    float num1, num2, result = 0;
    
    printf("\n Please Enter an Operator (+, -, *, /)  :  ");
    scanf("%c", &Operator);
    
    printf("\n Please Enter the Values for two Operands: num1 and num2  :  ");
    scanf("%f%f", &num1, &num2);
    
    switch(Operator)
    {
        case '+':
            result = add(num1, num2);//addition operation
            break;
        case '-':
            result = sub(num1, num2);//subtraction operation
            break;              
        case '*':
            result = multi(num1, num2);//multiplication operation
            break;
        case '/':
            result = div(num1, num2);//division operation
            break;
        default:
            printf("\n Wrong choice entered ");//default                                
    }
  
    printf("\n The result of %.2f %c %.2f  = %.2f", num1, Operator, num2, result);
    
    return 0;
}
float add(float a, float b)
{
    return a + b;
}

float sub(float a, float b)
{
    return a - b;
}

float multi(float a, float b)
{
    return a * b;
}

float div(float a, float b)
{
    return a / b;
}