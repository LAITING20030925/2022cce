#include <stdio.h>
int gcd(int a,int b)
{
    printf("a:%d b:%d\n",a,b);
    if(a==0) return b;
    if(b==0) return a;

    return gcd(b, a%b);
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);

    int ans = gcd(a,b);
    printf("%d\n",ans);
}
