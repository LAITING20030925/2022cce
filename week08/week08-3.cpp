#include <stdio.h>
int main()
{
    printf("請輸入 5個數字(要加起來): ");

    int n;
    int sum=0;
    for(int i=0; i<5; i++){
        scanf("%d",&n);
        sum += n;
    }
    printf("總和是:%d",sum);
}
