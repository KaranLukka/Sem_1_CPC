#include<stdio.h>
void main(){
	int Month; 
	printf("Enter number of month(1,2,3,4,5,6,7,9,10,11,12):");
	scanf("%d",&Month);
	switch(Month){
		case 1:
			printf("Month is Januray \n Days in this Month are 31 %d",Month);
			break;

		case 2:
			printf("Month is Februar \n Days in this Month are 28 %d",Month);
			break;

		case 3:
			printf("Month is March \n Days in this Month are 31 %d",Month);
			break;

		case 4:
			printf("Month is April \n Days in this Month are 30 %d",Month);
			break;

		case 5:
			printf("Month is May \n Days in this Month are 31 %d",Month);
			break;

		case 6:
			printf("Month is June \n Days in this Month are 30 %d",Month);
			break;

		case 7:
			printf("Month is July \n Days in this Month are 31 %d",Month);
			break;

		case 8:
			printf("Month is August \n Days in this Month are 31 %d",Month);
			break;

		case 9:
			printf("Month is September \n Days in this Month are 30 %d",Month);
			break;

		case 10:
			printf("Month is October \n Days in this Month are 31 %d",Month);
			break;

		case 11:
			printf("Month is November \n Days in this Month are 30 %d",Month);
			break;

		case 12:
			printf("Month is December \n Days in this Month are 31 %d",Month);
			break;
	}
}
