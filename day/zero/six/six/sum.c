#include<stdio.h>

int sum();

void main(){
    int res = sum();
    printf("Result: %d", res);
}

int sum(){
    int num1;
    int num2;

    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    return num1 + num2;
}