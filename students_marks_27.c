//program to store the information of student marks using structures and find total marks. 
#include<stdio.h>

//Student strcture data type: User-Defined data type
struct Student{
	//Student structure Member variables
	int rollNo;
	float chem;
	float maths;
	float phy;
	float total;
};

int main(){
	//Declare marks variable of Student strcture data type
	struct Student marks;
	marks.rollNo=10;
	marks.chem=9;
	marks.maths=7;
    marks.phy=10;
	marks.total=marks.chem+marks.maths+marks.phy;

	printf("student's (with rollNumber: %d) total marks=%f",marks.rollNo,marks.total);
	return 0;
}