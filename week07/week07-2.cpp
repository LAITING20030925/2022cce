#include <stdio.h>
int main()
{
///FILE * fout = fopen("file.txt","w");
   FILE * fin  = fopen("file.txt","r");

   ///printf("Hello World\n");
   ///fprintf(fout,"Hello World\n");
   char line[200];
   ///scanf("%s",line);
   fscanf(fin, "%s", line);
   printf("�{�b����ؿ����ɮ׸�Ū�J %s\n",line);

   fscanf(fin, "%s", line);
   printf("�{�b����ؿ����ɮ׸�Ū�J %s\n",line);

}
