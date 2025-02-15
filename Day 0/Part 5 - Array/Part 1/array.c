#include<stdio.h>
void main(){

    int i;
    int limit;

    printf("Enter arary limit: ");
    scanf("%d", &limit);

    int arr[limit];

    for(i=0; i<limit; i++){
        printf("Enter %dth element: ", i+1);
        scanf("%d", &arr[i]);
    }

    printf("Entered values are: ");
    for(i=0; i<limit; i++){
        printf("%d ", arr[i]);
    }

}