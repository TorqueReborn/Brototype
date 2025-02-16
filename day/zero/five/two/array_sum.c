#include<stdio.h>
void main(){

    int i;
    int limit;

    printf("Enter array size: ");
    scanf("%d", &limit);

    int arr[limit];

    for(i=0; i<limit; i++){
        printf("Enter %dth value: ", i+1);
        scanf("%d", &arr[i]);
    }

    int sum = 0;

    for(i=0; i<limit; i++){
        sum = sum + arr[i];
    }

    printf("Sum: %d", sum);

}