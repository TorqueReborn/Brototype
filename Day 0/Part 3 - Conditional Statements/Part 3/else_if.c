#include<stdio.h>
void main(){
    
    int num1;
    int num2;
    int choice;
    int result;

    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("\n1. Addition\n");
    printf("2.Subtraction\n");
    printf("3.Multiplication\n");
    printf("4.Division\n");
    printf("Enter choice: ");

    scanf("%d", &choice);

    if(choice == 1){
        result = num1 + num2;
        printf("Result: %d", result);
    } else if(choice == 2){
        result = num1 - num2;
        printf("Result: %d", result);
    } else if(choice == 3){
        result = num1 * num2;
        printf("Result: %d", result);
    } else if(choice == 4){
        result = num1 / num2;
        printf("Result: %d", result);
    } else {
        printf("You are a fool!");
    }

}