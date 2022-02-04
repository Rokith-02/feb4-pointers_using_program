#include<stdio.h>
#include"headerarrcpy.h"
int fun(int*,int*);
int main()
{
        int a[5],i,*p,r[5],*b;
        p=a;
        b=r;
        printf("enter the number\n");
        for(i=0;i<5;i++)
        scanf("%d",p+i);
        //for(i=0;i<5;i++)
        //printf("%d ",*(p+i));
        fun(p,b);
        for(i=0;i<5;i++)
        {
        printf("%d ",*(b+i));
        }
}
