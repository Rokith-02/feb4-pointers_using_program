#include<stdio.h>
int main()
{
        int a[5],i,temp,j,*p;
        p=&a[0];
        int n=sizeof a/sizeof a[0];
        printf("enter the array elements\n");
        for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        for(i=0;i<n;i++)
        {
                for(j=0;j<n-1-i;j++)
                {
                if(p[j]>p[j+1])
                {
                        temp=p[j];
                        p[j]=p[j+1];
                        p[j+1]=temp;
                }
                }
        }
        for(i=0;i<n;i++)
        printf("%d ",p[i]);
}
