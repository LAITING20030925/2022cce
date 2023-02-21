#include <stdio.h>
int main()
{
    char line[3000];

    printf("請輸入很長很長的字串,不要夾空格,結尾 Enter\n");

    scanf("%s",line);
    printf("它有幾個字母呢?\n");
    printf("%s\n",line);
    int count=0;
    for(int i=0; line[i]!=0; i++){
        count++;
    }
    printf("count:%d\n",count);
}
