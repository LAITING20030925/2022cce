#include <stdio.h>
int a=20;
void funcA()
{
    int a=10;
    printf("funcA裡面印a:%d\n", a);
}
void funcB()
{
    int a=30;
    printf("funcB裡面印a:%d\n", a);
}
int main()
{
    printf("在main()看到的a是:%d\n",a);
    funcA();
    funcB();
    printf("在main()看到的a是:%d\n",a);
}
