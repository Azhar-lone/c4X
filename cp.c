//similar to linux cp command //minimal
#include<stdio.h>
void copy(const char *srcFileName,const char *destFileName)
{
FILE *srcfile=fopen(srcFileName,"rb");
FILE *destfile=fopen(destFileName,"wb");
 char speed=1;
while( fread(&speed,1,1,srcfile)!=0)
{
fwrite(&speed,1,1,destfile);
}
fclose(srcfile);
fclose(destfile);
return;
}
int main(int argc,char **argv)
{
copy(argv[1],argv[2]);

}