#include <stdio.h>
int main()
{
    long long int a, b;
    scanf("%lld %lld", &a, &b);

    long long int ans;
    for(long long int i=1; i<=a; i++){
        if( a%i==0 && b%i==0 ) ans = i;
    }
    printf("最大公因數是:%lld\n", ans);
}
