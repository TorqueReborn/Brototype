#include<stdio.h>
void main(){
    int a = 5;
    int b = 2;

    int temp;

    temp = a;
    a = b;
    b = temp;

    printf("a: %d\n", a);
    printf("b: %d\n", b);
}