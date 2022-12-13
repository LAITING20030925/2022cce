#include <stdio.h>
int main()
{
    char line[] = "Hello World\n";

    printf("%c\n", line[0]);
    for(int i=0;i<12;i++){
        printf("=c=", line[i]);
    }
}
