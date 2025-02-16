#include<stdio.h>

void sum();

void main(){
    sum();
}

void sum(){

    int num1;
    int num2;
    int sum;

    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    sum = num1 + num2;

    printf("Sum: %d", sum);
}