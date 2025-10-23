/*
Name:Kevin kipngeno
Reg no:PA106/G/28707/25
Details:Convert to celcius
Date:9 October 2025
*/
#include<stdio.h>

int main(){
    float F;
    float C;

    printf("Enter temperature in fahrenheit:");
    scanf("%f",&F);
    printf("        \n");

    C=((F-32)*5/9);

	
    printf("C=%.2fC",C);
	


    return 0;
}