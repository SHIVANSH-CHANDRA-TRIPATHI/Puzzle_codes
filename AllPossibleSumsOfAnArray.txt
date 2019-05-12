#include<stdio.h>
long int comb(long int n,long int r);
long int fact(long int n);
long int fact(long int n)
{if(n==0)
return 1;
    long int i,k=1;
    for(i=1;i<=n;i++)
        k=k*i;
    return k;
}
long int comb(long int n,long int r)
{
if(n<0||r<0||n<r)
    return 0;
return fact(n)/(fact(r)*fact(n-r));
}
int main()
{
    long int i,z,r,k,c[100000],a[100000],sum1,sum2,n;
printf("Enter number of elements-");
scanf("%d",&n);
printf("Enter the elements-");
    for(k=1;k<=n;k++)
    {
        scanf("%d",&c[k]);
    }
    for(z=2;z<=n;z++)
    {

        for(r=1;r<=n;r++)
        {
            if(z==2)
        {
            for(i=1;i<=comb(n-r,1);i++)
             {  c[k]=c[r+i]+c[r];
            k++;}
        }
        else
        {sum1=0,sum2=0;
            for(i=1;i<=z-2;i++)
            sum1=sum1+comb(n,i);
            for(i=1;i<=r;i++)
            sum2=sum2+comb(n-i,z-2);

               for(i=1;i<=comb(n-r,z-1);i++)
                  {
                    c[k]=c[sum1+sum2+i]+c[r];

                    k++;
                  }
        }
    }
}
    z=0;
    for(i=1;i<k;i++)
   {

     for(r=1;r<i;r++)
    {if(c[i]==c[r])
        break;}
        if(r==i)
        {a[z]=c[i];z++;}
   }
   printf("The required sums are:");
        for(i=0;i<z;i++)
            printf("\n%d\n",a[i]);

    return 0;
}











