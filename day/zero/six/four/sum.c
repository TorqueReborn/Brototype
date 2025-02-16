#include<stdio.h>

void sum(int, int);

void main(){
    int num1;
    int num2;

    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d" ,&num2);

    sum(num1, num2);
}

void sum(int num1, int num2){
    int result = num1 + num2;
    printf("Result: %d", result);
}