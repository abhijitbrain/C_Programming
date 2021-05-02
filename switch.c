#include<stdio.h>

void main()
{
    char a=50, b=20;

    switch(b-a){
        case 20:
            printf("Hello \n");
            break;
        case 30:
            printf("Hi \n");
            break;
        case 50:
            printf("Byee \n");
            break;
        default:
            printf("OK \n");
    }
}