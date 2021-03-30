//Student structure implimentation which should contain, name, marks in different subjects, attendance percentage, Roll Number as members.

#include <stdio.h> //Pre process directive to include standard input output functions header file
struct student { //structure body
    char name[50];
    int roll;
    float marks;
} s;

int main() { //main function body starting

    printf("Enter information:\n");
    printf("Enter name: ");
    fgets(s.name, sizeof(s.name), stdin);

    printf("Enter roll number: ");
    scanf("%d", &s.roll);
    printf("Enter marks: ");
    scanf("%f", &s.marks);

    printf("Displaying Information:\n");
    printf("Name: ");
    printf("%s", s.name);
    printf("Roll number: %d\n", s.roll);
    printf("Marks: %.1f\n", s.marks);

  return 0;
}