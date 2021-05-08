#include<stdio.h>

void main()
{
    int *j;
    int * func();
    j=func();
    printf("%d \n",*j);

}

int *func()
{
    int k=35;
    return(&k);
}