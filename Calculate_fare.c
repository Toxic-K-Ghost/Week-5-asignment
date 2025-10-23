/*
Name:Kevin kipngeno
Reg no:PA106/G/28707/25
Details:C function to calculate fare
Date:20 October 2025
*/
#include<stdio.h>

int main(){
	
	int fare_rate;
	float fare,distance;
	
	printf("       ~>Fare calculator<~\n");
	printf("  \n");
	
	printf("Enter distance:");
	scanf("%f",&distance);
	
	printf("Enter fare rate per kilometer:");
	scanf("%d",&fare_rate);
	
	fare=fare_rate*distance;
	
	printf("Fare:ksh.%.2f",fare);
	
	
	
	return 0;
}