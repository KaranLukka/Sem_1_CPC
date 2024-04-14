#include<stdio.h>
void main(){
	char day;
	printf("Enter day in week(1,2,3,4,5,6,7):");
	scanf("%c",&day);
	switch(day){
		case'1':
			printf("Monday %c",day);
			break;

		case'2':
			printf("Tuesday %c",day);
			break;

		case'3':
			printf("Wednesday %c",day);
			break;

		case'4':
			printf("Thursday %c",day);
			break;
			
		case'5':
			printf("Friday %c",day);
			break;	

		case'6':
			printf("Saturday %c",day);
			break;	
			
		case'7':
			printf("Sunday %c",day);
			break;						
	}


}