#include<stdio.h>

void __attribute__((constructor)) fun();
#pragma exit fun1

void fun()
{
    printf("Inside fun \n");
}

void main()
{
    printf("Inside Main1 \n");
}

void fun1()
{
    printf("Inside fun1 \n");
}