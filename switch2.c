#include<stdio.h>

void main()
{
    int choice;
    int fact,n;

    while(1){
        printf("1: Factorial \n 2: Prime\n 3: Odd/Even\n 4: Exit \n");
        printf("Your Choice : ");
        scanf("%d",&choice);

        switch (choice)
        {
        case 1:
            printf("Enter a number to get factorial :");
            scanf("%d",&n);
            int m=n;
            fact=1;
            while(m!=0){
                fact *= m;
                m--;
            }
            printf("Factorial of %d is %d\n",n,fact);
            break;
        case 2:
                
                break;
        default:
            break;
        }

    }

}
