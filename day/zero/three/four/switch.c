#include<stdio.h>
void main(){
    
    int choice;

    printf("1. Porotta\n");
    printf("2. Biriyani\n");
    printf("3. Fried Rice\n");
    printf("4. Mandhi\n");
    printf("Enter choice: ");

    scanf("%d", &choice);

    switch(choice){
        case 1:
            printf("You selected Porotta");
            break;
        case 2:
            printf("You selected Biriyani");
            break;
        case 3:
            printf("You selected Fried Rice");
            break;
        case 4:
            printf("You selected Mandhi");
            break;
        default:
            printf("You are a fool!");
    }

}