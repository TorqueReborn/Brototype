#include<stdio.h>

int sum(int, int);

void main(){
    int num1;
    int num2;

    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    int result = sum(num1, num2);
    printf("Result: %d", result);
}

int sum(int num1, int num2){
    return num1 + num2;
}