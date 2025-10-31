/*
Name:Kevin kipngeno
Reg no:PA106/G/28707/25
Description:C function to calculate fare
*/
#include<stdio.h>

float fare(float distance,int fare_rate);
void main(){
	float result;
	
	result=fare(10,50);
	printf("Total fare:ksh%.2f\n",result);
	
	
	return 0;
}
//function discription
float fare(float distance,int fare_rate){
	int total_fare;
	total_fare=distance*fare_rate;
	
	return total_fare;
}