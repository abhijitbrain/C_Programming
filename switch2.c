#include<stdio.h>

void main()
{
    int loop =1;
    int choice,fact,n;
    int numb;

    while(loop){
        printf("\n 1: Factorial \n 2: Prime\n 3: Odd/Even\n 4: Exit \n");
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
            printf("Prime or Not, Enter number : ");
            scanf("%d",&numb);

            int i,flag=0;
            for(i=2;i<=numb/2;i++){
                if(numb%i == 0)
                    flag = 1;
            }
            if(flag == 1){
                printf("Number is not PRIME \n");
            }else{
                printf("Number is PRIME \n");
            }

            break;
        case 3:
            printf("ODD/EVEN, Enter a number : ");
            scanf("%d",&numb);

            if(numb%2 == 0)
                printf("Number is EVEN \n");
            else
                printf("Number is ODD \n");
            break;
        case 4:
            loop=0;
            break;
        default:
            break;
        }

    }

}
