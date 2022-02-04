#include<stdio.h>
#include<string.h>
#include"stringheader.h"
int main()
{
        char a[100],b[100];
        scanf("%[^\n] %[^\n]",a,b);
        int k=fun(a,b);
        printf("Concatenated two string:%s\n",a);
        printf("Length of concatenated string:%d\n",k);
}
