#include<stdio.h>
void main(){
    int unit;
    float total_bill;
    printf("Enter value of unit:");
    scanf("%d",&unit);
    if(unit<=50){
        total_bill=(unit*0.5)*0.2;
        }
    else if(unit>=51 && unit<=150){
        total_bill=(50*0.5+(unit-50)*0.75)*0.2;
            }
    else if(unit>=151 && unit<=250){
        total_bill=(50*0.5+100*0.75+(unit-100)*1.2)*0.2;
        }
    else {
        total_bill=(50*0.5+100*0.75+100*1.2+(unit-250)*1.5)*0.2;
        }
    printf("%f",total_bill);
      
}
