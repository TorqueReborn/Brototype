#include<stdio.h>
void main(){

    int i;
    int limit;

    printf("Enter array size: ");
    scanf("%d", &limit);

    int arr[limit];

    for(i=0; i<limit; i++){
        printf("Enter %dth element: ", i+1);
        scanf("%d", &arr[i]);
    }

    int search;
    int flag = 0;

    printf("Enter value to search: ");
    scanf("%d", &search);

    for(i=0; i<limit; i++){
        if(arr[i] == search){
            flag = 1;
            break;
        }
    }

    if(flag == 0){
        printf("Element not in the array");
    }else{
        printf("Element found at position %d in the array", i+1);
    }

}