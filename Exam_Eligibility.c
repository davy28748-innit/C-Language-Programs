/*Name:Davy Kipkosgei Koech
Registration No:PA106/g/28748/25
Description:Exam Eligibility
*/
#include <stdio.h>

int main(){
	float attendance, avgMarks;
	
	printf("Enter attendance percantage:");
	scanf("%f", &attendance);
	
	printf("Enter average marks:");
	scanf("%f", &avgMarks);
	
	if(attendance>=75 &&avgMarks>=40){
		printf("Eligible for exams. \n");
	} else{
		printf("Not eligible.\n");
	}
	return 0;

}
