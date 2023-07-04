#include <stdio.h>

int main()
{
    int a=10;
    int *p;
    p=&a;

    printf("the value of a %i",*p);
    return 0;
}