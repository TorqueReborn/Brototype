#include<stdio.h>
void main(){
    int rows = 5;
    int cols = 5;

    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            printf("* ");
        }
        printf("\n");
    }

}