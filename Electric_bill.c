/*
Name:Kevin kipngeno
Reg no:PA106/G/28707/25
Details:program to calculate electric bill
Date:20 October 2025
*/

#include <stdio.h>

int main() {
    int units;
    float bill ;
    
    
    printf("Enter units consumed: ");
    scanf("%d", &units);
    
    
    if (units <= 100) {
        bill = units * 10;
    } 
    else if (units <= 200) {
        bill = (100 * 10) + ((units - 100) * 15);
    } 
    else {
        bill = (100 * 10) + (100 * 15) + ((units - 200) * 20);
    }


    printf("Total Bill: KSh. %.2f\n",bill);
    
    
    
    return 0;
}