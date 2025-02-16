#include<stdio.h>
void main(){
    char name[100];
    printf("Enter name: ");
    gets(name);
    printf("Entered name is %s", name);
}