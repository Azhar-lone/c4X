#include<stdio.h>

void syntax(void)
{

}


int main(int argc,const char** argv)
{
if(argc!=3)
{
    printf("\nInvalid number of arguments\n");
    syntax();
    return 1;
}
FILE* srcFile=fopen(argv[1],"rb");
if(srcFile==NULL)
{
    printf("\n no such file or directory");
    syntax();
    return 1;
}
FILE* destFile=fopen(argv[2],"wb");
char speed=1;
while(fread(&speed,1,1,srcFile)!=0)
{
fwrite(&speed,1,1,destFile);
}
//delete is'nt yet working
delete(srcFile);
fclose(srcFile);

fclose(destFile);
return 0;

}