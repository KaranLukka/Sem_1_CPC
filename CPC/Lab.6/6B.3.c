#include<stdio.h>
void main(){
	int side_A,side_B,side_C;
	printf("Enter value of side_A:");
	scanf("%d",&side_A);
	printf("Enter value of side_B:");
	scanf("%d",&side_B);
	printf("Enter value of side_C:");
	scanf("%d",&side_C);
	if(side_A==side_B && side_A==side_C && side_B==side_C){
		printf("Triangle is Equilateral");		
	}
	else if((side_A!=side_B && side_A!=side_C && side_B==side_C) || (side_A==side_B && side_A==side_C && side_B!=side_C) || (side_A==side_B && side_A!=side_C && side_B==side_C)){
		printf("Triangle is Isosceles");			
	}
	else if(side_A*side_A+side_B*side_B==side_C*side_C){
		printf("Triangle is Right angled triangle");			
	}
	else{
		printf("Triangle is Scalen");			
	}	
}
