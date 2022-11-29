#include <stdio.h>
int main()
{
    ///for(int i=0; i<5; i++){
    ///     printf("i:%d\n", i);
    ///}
    for(int i=5; i>0; i--){
        for(int j=0; j<i; j++){
            printf("*");
        }
        printf("i:%d¬P¬P\n", i);
    }
}
