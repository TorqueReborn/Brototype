#include<stdio.h>
void main(){
    float num1;
    float num2;
    float num3;
    float avg;

    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Enter second number: ");
    scanf("%f", &num2);
    printf("Enter third number: ");
    scanf("%f", &num3);

    avg = (num1 + num2 + num3) / 3;

    printf("Average: %f\n", avg);

}