#include<stdio.h>
void rm(const char *srcFileName)
{
FILE *srcfile=fopen(srcFileName,"rb+");
 char speed=1;
while( fread(&speed,1,1,srcfile)!=0)
{
fwrite(0,1,1,srcfile);
}
fclose(srcfile);
return;
}
int main(int argc,char **argv)
{
rm(argv[1]);

}