#include<stdio.h>
void main(){

    int i;
    int j;
    int num;

    printf("Enter limit: ");
    scanf("%d", &num);

    for(i=1; i<=num; i++){
        for(j=0; j<i; j++){
            printf("* ");
        }
        printf("\n");
    }

}