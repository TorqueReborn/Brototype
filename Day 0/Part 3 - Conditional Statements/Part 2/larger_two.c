#include<stdio.h>
void main(){

    int num1;
    int num2;
    
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    if(num1 > num2){
        printf("First number is greater");
    }else{
        printf("Second number is greater");
    }
}