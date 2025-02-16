#include<stdio.h>
void main(){

    int i;
    int num;
    int flag = 0;

    printf("Enter number: ");
    scanf("%d", &num);

    for(i=2; i<num/2; i++){
        if(num % i == 0){
            flag = 1;
            break;
        }
    }

    if(flag == 0){
        printf("The number is prime");
    }else{
        printf("The number is not prime");
    }

}