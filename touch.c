//similar to linux touch command

#include<stdio.h>

void syntax(void)
{
    printf("\nsyntax :\n");
    printf("\ntouch filename\n");
return;
}

int main(int agrc ,const char** argv)
{

if(agrc<2)
{
    printf("\nInvalid number of arguments");
    syntax();
    return 1;
}
for(int i=1;i<agrc;i++)
{
FILE* file= fopen(argv[i],"w");
if(file==NULL)
{
    printf("failed to create file %s",argv[i]);
}
fclose(file);
}
return 0;
}