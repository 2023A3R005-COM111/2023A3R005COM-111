#include <stdio.h>

int main(){
	int marks;

	printf("Enter Students Marks (0-100): ");
	scanf("%d", &marks);
    //evaluating the grade of students according to there marks
	if (marks <= 40){
		printf("Student Faild\n");
	} else if (marks <= 50){
		printf("Student achieved First Grade\n");
	} else if (marks <= 60){
		printf("Student achieved Second Grade\n");
	} else if (marks <= 80){
		printf("Student achieved Third Grade\n");
	} else{
		printf("Student achieved Honour Grade.\n");
	}
	return 0;
}
