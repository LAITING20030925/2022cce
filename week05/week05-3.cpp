#include <stdio.h>
int main()
{
    int a=10,b=20;
    int * p1 = &a;
    int * p2 = &b;
    printf("a: %d b:%d\n", a,b);

    *p1 = 10;
    printf("a: %d b:%d\n", a,b);

    p2 = &a;
    *p2 = 40;
    printf("a: %d b:%d\n", a,b);
}
