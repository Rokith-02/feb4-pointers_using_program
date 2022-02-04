int fun(int *p,int *b)
{
        int i;
        for(i=0;i<5;i++)
        {
                *(b+i)=*(p+i);
        }
}
