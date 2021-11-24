#include<stdio.h>
#include<string.h>

int main()
{
    char str[1000];
    printf("Input string: ");
    gets(str);
    int flag=0;
    for(int i=0; i<strlen(str); i++)
    {
        if(str[i]=='/' && str[i+1]=='/'){
            flag=1;
            break;
        }
        if(str[i]=='/' && str[i+1]=='*')
        {
            i++;
            flag=1;
        }
        if(flag==0)
            printf("%c",str[i]);
        if(flag==1 && str[i]=='*' && str[i+1]== '/')
        {
            flag=0;
            i++;
        }
    }
    return 0;
}
