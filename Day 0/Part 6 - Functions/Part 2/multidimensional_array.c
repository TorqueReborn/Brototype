#include<stdio.h>
void main(){

    int i;
    int j;
    int rows = 3;
    int cols = 3;
    int arr[rows][cols];

    for(i=0; i<rows; i++){
        for(j=0; j<cols; j++){
            printf("Enter %dth row and %dth col value: ", i+1, j+1);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\nMatrix\n\n");
    for(i=0; i<rows; i++){
        for(j=0; j<cols; j++){
            printf("%d  ", arr[i][j]);
        }
        printf("\n");
    }

}