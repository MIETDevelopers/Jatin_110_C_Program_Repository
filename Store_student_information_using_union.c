// To store information of a student using union
// Written by -- jatin rana
// 21-03-2021


#include <stdio.h> //Pre-Process directive to include standard input and output functions header file
#include <string.h> // Pre-Process directive to include string functions header file
union student{ //union body
	char name[20]; 
	char subject[20];
	float percentage;
};

int main(){ //Main function body staring
	
	union student store1; //declaraing store1 variable for union
	union student store2; //declaraing store2 variable for union

	/* ================================================================== */

	//Assigning values to store1 union variable and printing the information

	printf("Union store 1 values :\n"); //Printf function calling

	//Name of Student
	strcpy(store1.name, "KOUSHIK_MAHAJAN");
	printf("Name: %s\n", store1.name);

	//Name of subject
	strcpy(store1.subject, "Computer");
	printf("Subject: %s\n", store1.subject);

	//Percentage scored by the student
	store1.percentage = 85.34;
	printf("Percentage: %.2f\n\n", store1.percentage);

	/* ================================================================== */

	//Assigning values to record2 union variable and printing the information

	printf("Union store 2 values :\n"); //Printf function calling

	//Name of student
	strcpy(store2.name, "RAJVEER_RANA");
	printf("Name: %s\n", store2.name);

	//Name of subject
	strcpy(store2.subject, "Maths");
	printf("Subject: %s\n", store2.subject);

	//Percentage scored by the student
	store2.percentage = 80.60;
	printf("Percentage: %.2f\n", store2.percentage);

return 0; //Return function of standard library

} //Main function body ends
