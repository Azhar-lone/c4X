//similar to linux cat command
#include<stdio.h>

void syntax(void)
{
    printf("\nsyntax :\n");
    printf("\ncat filename :\n");

return;
}

int main(int argc ,const char**argv)
{

    printf("\n\n");

if(argc!=2)
{
    printf("\nInvalid number of Arguments\n");
syntax();
return 1;
}

FILE *file=fopen(argv[1],"r");
char lineSize[40];

while(fgets(lineSize,40,file))
{
    printf("%s",lineSize);
}
return 0;
}