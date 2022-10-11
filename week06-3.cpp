#include <stdio.h>
int main()
{
    printf("請輸入2個整數,要約分: ");
    int a, b;
    scanf("%d %d", &a, &b);///51 68

    int ans; ///約分的答案 (最大通因數)
    for(int i=1; i<=a; i++){
        if( a%i==0 && b%i==0){
            ans = i;
        }
    }
    printf("ans: %d 可約分", ans);
    ///把答案印出來
}
