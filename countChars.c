#include<stdio.h>

void syntax(void)
{
    printf("\nsyntax :\n");
    printf("\ncountChars options filename :\n");
    printf("\nif no option is specified returns only charactor without spaces\n");
    printf("\n options :\n");
    printf("\n s: count with spaces \n");
    printf("\n n: count without spaces \n");
return;
}

void  withSpace(const char* fileName)
{
    FILE* file=fopen(fileName,"r");
    int i=0;
    while(getc(file)!=EOF)
    {
i++;
    }
printf("count =%i",i);
return;
}
void withoutSpace(const char* fileName)
{
     FILE* file=fopen(fileName,"r");
 
    int i=-1;

    char c=0;
    while(c!=EOF)
    {
        c=getc(file);
        if(c==' ')
        continue;
    
       i++;
    }
printf("count =%i",i);
return;
    
}
int main(int argc,const char** argv)
{
    printf("\n\n");


if(argc<2||argc>3)
{
    printf("\nInvalid number of Arguments\n");
syntax();
return 1;
}

if(argc==3)
{
if(argv[1][0]=='s')
{
withSpace(argv[2]);
return 0;
}
else if(argv[1][0]=='n')
{
withoutSpace(argv[2]);
return 0;
}else{
     printf("\nInvalid Options\n");
return 1;
}
}
else{
withoutSpace(argv[1]);
return 0;
}
}