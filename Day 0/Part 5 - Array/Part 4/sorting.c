#include<stdio.h>
void main(){

    int i;
    int j;
    int limit;

    printf("Enter array size: ");
    scanf("%d", &limit);

    int arr[limit];

    for(i=0; i<limit; i++){
        printf("Enter %dth element: ", i+1);
        scanf("%d", &arr[i]);
    }

    int temp;

    for(i=0; i<limit-1; i++){
        for(j=i+1; j<limit; j++){
            if(arr[i] > arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("Sorted array: ");
    for (i = 0; i < limit; i++){
        printf("%d ", arr[i]);
    }
    

}