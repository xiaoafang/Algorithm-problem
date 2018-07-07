#include <stdio.h>
int main()
{
    int n,k;
    int i=0;
    int a[100];
    scanf("%d%d",&n,&k);
    for(i=1;i<=n;i++)
    {
        a[i]=1;
    }
    int m=2;
    while(m<=k)
    {
        for(i=2;i<=n;i++)
        {
            if(i%m==0&&a[i]==0)    
            {
                a[i]=1;
            }
            else if(i%m==0 && a[i]==1)
            {
                a[i]=0;
            }
        }
        m++;
    }
        for(i=1;i<=n;i++)
        {
            printf("%d",a[i]);
        }
       return 0;       
}
