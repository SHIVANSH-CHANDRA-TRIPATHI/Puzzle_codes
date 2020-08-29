#include<stdio.h>
int a[100];
char rec(int i,int n,int j)
{
    if(n==1)
        return 'Y';
    if(j!=a[i]&&j!=a[i]+(n-1)&&j!=a[i]-(n-1))
        return rec(i+1,n-1,j);
    else
        return 'N';
}

void main()
{
    int j,k,m,i=1,n,x,b[100][100],c=0;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for(m=1;m<=n;m++)
    {
        b[m][1]=1;x=1;a[x]=m;x++;
        for(k=2;k<=n;k++)
        {
            y:
                for(j=1;j<=n;j++)
                {
                    if(rec(1,k,j)=='Y')
                    {
                        b[j][k]=1;
                        a[x]=j;printf("\n a[%d]=%d\n",x,j);x++;
                        break;
                    }

                }
z:
for(i=1;a[x-1]+i<=n;i++)
           {

            if(j>n&&a[x-1]<n&&k>2&&rec(1,k-1,a[x-1]+i)=='Y')
            {
                b[a[x-1]][k-1]=0;
                b[a[x-1]+i][k-1]=1;
                a[x-1]=a[x-1]+i;
                goto y;
            }
           }
            if(a[x-1]+i>n&&k>3&&j>n)
            {   b[a[x-1]][k-1]=0;
                k--;x--;
                goto z;
            }
            if(j>n&&a[x-1]==n&&k>3)
            {   b[n][k-1]=0;
                k--;x--;
                goto z;
            }
            if(x==k)
                break;
        }



     if(x==n+1)
        {c++;
            for(j=1;j<=n;j++)
{
    printf("a[%d]=%d\n",j,a[j]);
}
    for(j=1;j<=n;j++)
{
    for(k=1;k<=n;k++)
    {
        if(j==a[k])
        printf(" 1 ");
        else
            printf(" 0 ");
    }
    printf("\n");
}
        }
    b[m][1]=0;}

printf("c=%d",c);
}
