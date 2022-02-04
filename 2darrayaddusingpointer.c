#include<stdio.h>
int main()
{
        int a[2][2],i,j,b[2][2],c[2][2];
        int *p,*p1,*p2;
        p=&a[0][0];
        p1=&b[0][0];
        printf("enter array for 2*2 matrix\n");
        for(i=0;i<2;i++)
        {
                for(j=0;j<2;j++)
                {
                        scanf("%d",(p+i)+j);
                }
        }
        for(i=0;i<2;i++)
        {
                for(j=0;j<2;j++)
                {
                        scanf("%d",(p1+i)+j);
                }
        }
        for(i=0;i<2;i++)
        {
                for(j=0;j<2;j++)
                {
                        c[i][j]=*((p+i)+j)+ *((p+i)+j);
                }
        }
        for(i=0;i<2;i++)
        {
                for(j=0;j<2;j++)
                {
                        printf("%d ",c[i][j]);
                }
                printf("\n");
        }
}
