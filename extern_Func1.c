#include<stdio.h>

extern void sum(int *a, int *b, int *c);

void main2()
{
    int x,y,z;
    x=40,y=50;

    sum(&x,&y,&z);
    printf("z = %d \n",z);
}

void sum(int *a, int *b, int *c)
{
    *c = *a + *b;
    printf("In Sum API c= %d \n",*c);
}