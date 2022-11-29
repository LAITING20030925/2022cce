#include <stdio.h>
void display_num(int);

int main()
{
    display_num(5);
}

void display_num(int a)
{
    printf("你丟給display_num()的參數引數是: %d\n", a);
    return;
}
