#include<stdio.h>
void main(){
	int Hindi,Maths,English,Science,SS;
	float percent;
	printf("Enter marks in Hindi out of 100:");
	scanf("%d",&Hindi);
	printf("Enter marks in Maths out of 100:");
	scanf("%d",&Maths);
	printf("Enter marks in English out of 100:");
	scanf("%d",&English);
	printf("Enter marks in Science out of 100:");
	scanf("%d",&Science);
	printf("Enter marks in SS out of 100:");
	scanf("%d",&SS);
	percent=((Hindi+Maths+English+Science+SS)/500)*100;
	if(percent<35){
		printf("Student fail");
	}
	if(percent>=35 && percent<=45){
		printf("Student passed");
	}
	if(percent>=46 && percent<=60){
		printf("Student is in Second class");
	}
	if(percent>=61 && percent<=70){
		printf("Student is in First class");
		}
	if(percent>70){
		printf("Student got Distinction");
	}

}
