#include<stdio.h>

extern void sum(int *a, int *b, int *c);

void main()
{
    int x,y,z;
    x=10,y=20;

    sum(&x,&y,&z);
    printf("z = %d \n",z);
    main2();
}