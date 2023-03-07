#include <stdio.h>
#include <string.h>
int main()
{
    char line[50];
    scanf("%s",line);

    int N = strlen(line);
    int yes=0;
    for(int i=0; i<N; i++){
        if( line[i]==line[N-1-i] ) yes++;
    }
    if(yes==N)printf("场常yesΜ霍,琌癹ゅ\n");
    else printf("ぃ続场常yes,碞ぃ琌癹ゅ\n");
}
