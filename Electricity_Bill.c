/*Write a c program to input electricity unit charges and calculate the total electricity bill according to the given condition
for first 50 units Rs. 0.50/unite
for next 100 units Rs. 0.75/unite
for next 100 units Rs. 1.20/unite
for unit above 250 Rs. 1.50/unite
an additional surcharge of 20% is added to the bill*/

#include <stdio.h>

int main() {
    int cid;
    char name[30];
    int unit;
    float total;
    printf("Enter customer ID:");
    scanf("%d",&cid);
    printf("Enter customer Name:");
    scanf("%s",&name);
    printf("Enter your electricity consumption: ");
    scanf("%d",&unit);
    if(unit<=50)
    {
        total = unit*0.50;
    }
    else if (unit<=150)
    {
        total = (50*0.5) + ((unit-50)*0.75);
    }
    else if (unit<=150)
    {
        total = (50*0.5) + (100*0.75) + ((unit-150)*1.20);
    }
    else 
    {
        total = (50*0.5) + (100*0.75) +(100*1.20) + ((unit-250)*1.50);
    }
    total = total + total*0.2;
    printf("Your total bill is: %0.2f",total);
    return 0;
}