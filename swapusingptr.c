#include<stdio.h>
#include"headerswap.h"
int main()
{
        int a,b;
        printf("enter the numbers\n");
        scanf("%d %d",&a,&b);
        fun(&a,&b);
        printf("a:%d b:%d\n",a,b);
}
