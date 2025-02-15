#include<stdio.h>
void main(){
    
    int i;
    int num;
    int sum = 0;

    printf("Enter limit: ");
    scanf("%d", &num);

    for(i=1; i<=num; i++){
        sum = sum + i;
    }

    printf("Sum: %d", sum);

}