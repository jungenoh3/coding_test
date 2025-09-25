#include <stdio.h>

int main(){
	int i;
	double gpa, sum = 0, gpa_sum = 0, grade_score;
	char grade[2], course_name[50];
	
	for (i=0; i<20; i++){
		scanf("%s %lf %s", course_name, &gpa, grade);
		
		if (grade[0] == 'F'){
			gpa_sum+=gpa;
			continue;
		} else if (grade[0] == 'P'){
			continue;
		}
		
		grade_score = 69 - grade[0];
		if(grade[1] == '+'){
			grade_score += 0.5;
		}
		
		sum += (gpa * grade_score);
		gpa_sum+=gpa;
	}
	
	printf("%lf", sum/gpa_sum);
}
