#include<stdio.h>

void main()
{
    int a[10]={0};

    for(int i=0;i<20;i++)
        printf("%d \n",a[i]);
    printf("Size = %d",sizeof(a));
}