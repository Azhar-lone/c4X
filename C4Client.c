#include<stdio.h>

#include<sys/socket.h>
#include<netinet/in.h>

void syntax(void){
    printf("\nsyntax :\n");
    printf("\nclient ip portNumber\n");
    return;
}
int parseInt(const char* string){
int i=0;
char flag=0;
if(string[0]=='-')
{
    i++;
    flag=1;
}

int integer=0,remainder=0;
for(;string[i]!='\0';i++)
{
    if(string[i]<48||string[i]>57)
    {
        return -1;
    }
remainder=string[i]-48;
integer=(integer*10)+remainder;
}
if(flag==1)
 {
    integer=-(integer);
 }
 return integer;

}
//returns 1 on success and 0 on failure 
char createClient(const char *ip,int portNumber){
int client=socket(AF_INET,SOCK_STREAM,0);
if(client<0)
return 0;
struct sockaddr_in serverAddress;
serverAddress.sin_port=htons(portNumber);
serverAddress.sin_family=AF_INET;
serverAddress.s.addr.=

if(connect(client,(struct sockaddr*)&serverAddress,)<0)
return 0;

}



int main(int argc,const char **argv){
if(argc!=3)
{
    printf("\nInvalide number of arguments\n");
syntax();
return 1;
}
int portNumber=parseInt(argv[2]);
 if(createClient(argv[1],portNumber)!=1)
{
    printf("\nError while creating client");
    return 1;
}

return 0;
}