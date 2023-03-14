#include <stdio.h>
int main()
{
    int a = 10;
    int *p = &a;

    printf("a:%d address:%d\n",a,&a);
    printf("p:%d point to %d\n",p,*p);

    *p = 20;
    printf("now a is: %d\n",a);
}
