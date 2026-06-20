#include<stdio.h>
void enct(char text[],int key)
{
    for(int i=0;text[i]!='\0';i++)
    {
        text[i]=text[i]+key;
    }
    printf("%s\n",text);
}
void dct(char text[],int key)
{
    for(int i=0;text[i]!='\0';i++)
    {
        text[i]=text[i]-key;
    }
    printf("%s",text);
}

int main()
{
    char msg[100];
    int key;
    printf("enter msg:");
    scanf("%s",msg);
    printf("enter key:");
    scanf("%d",&key);
    printf("encrypted:");
    enct(msg,key);
    printf("decrypted:");
    dct(msg,key);
    return 0;
}