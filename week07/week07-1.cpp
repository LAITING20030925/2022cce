#include <stdio.h>
int main()
{
    FILE * fout = fopen("file.txt","w");
    ///printf("Hello World\n");
    fprintf(fout,"Hello World\n");

    printf("檔案就出現了喔,請檢查檔案總管\n");
}
