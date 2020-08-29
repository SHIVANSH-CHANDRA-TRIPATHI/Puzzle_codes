#include<stdio.h>
#include<conio.h>
void main()

{
int z,n,k=1,j,i,a[100][100];
x:
printf("enter any number(except 1&2)-");
scanf("%d",&n);if(n%4==0){
  for(i=0;i<n;i++)
             {
              for(j=0;j<n;j++)
                      {
                        a[i][j]=k;
                        k++;
                      }
         }

    for(z=0;z<(n/4);z++)
             {
              k=(4*z+1)*n;
              j=0;
              for(i=(n-1-4*z);i>=0;i--)
              {
               a[i][j]=k;
               k=k+n-1 ;
               j++;
              }
              }
   for(z=1;z<(n/4);z++)
           {
             k=n-4*z;
             i=n-1;
             for(j=4*z;j<n;j++)
          {
           a[i][j]=k;
           k=k+n-1;
           i--;
          }
     }
     for(z=0;z<(n/4);z++)
     {
     k=4*z+1;
     i=n-1;
     for(j=n-1-z*4;j>=0;j--)
     {
     a[i][j]=k;
k=k+n+1;i--;}}

for(z=1;z<n/4;z++)

{k=n*(z)*4+1;j=n-1;;for(i=n-1-4*z;i>=0;i--)

{a[i][j]=k;k=k+n+1;j--;}}

 }  if(n%2!=0){



i=n/2;j=n-1;
for(k=1;k<=n*n;k++)
{a[i][j]=k;
if(k%n==0)
j--;else{
if(i==n-1)
i=0;else

i++;
if(j==n-1)
j=0;else

j++;}
}}
if((n%2==0)&&(n%4!=0))
{

i=0;j=n/4;

for(k=1;k<=n*n;k++)
               {  a[i][j]=k;
if(k>=1&&k<=((n/2)*(n/2)))
{
if(k%(n/2)==0)
i++;
else
{if(i==0)
i=(n/2)-1;
else
i--;
if(j==(n/2)-1)
j=0;
else
j++;}
if(k==(n/2)*(n/2))
{i=n/2;j=3*n/4;}}



 if(k>((n/2)*(n/2))&&k<=2*(n/2)*(n/2))
 {if(k%(n/2)==0)
i++;
else
{
if(i==n/2)
i=n-1;
else
i--;
if(j==(n-1))
j=(n/2);
else
j++;}
if(k==2*(n/2)*(n/2))
{i=0;j=3*n/4;}}





if(k>2*(n/2)*(n/2)&&k<=3*(n/2)*(n/2))
{if(k%(n/2)==0)
  i++;
  else
  {if(i==0)
  i=(n/2)-1;
  else
  i--;
  if(j==n-1)
  j=n/2;
  else
  j++;
  }
  if(k==3*(n/2)*(n/2))
{i=n/2;j=n/4;}}





if(k>3*(n/2)*(n/2)&&k<=4*(n/2)*(n/2))
{if(k%(n/2)==0)
i++;
else
{if(i==n/2)
i=n-1;
else
i--;
if(j==(n/2)-1)
j=0;
else
j++;
}
 if(k==3*(n/2)*(n/2))
               {i=n/2;j=n/4;}

    }              }
k=(n-2)/4;
for(j=0;(j<k||j>=(n-k+1))&&(j<n);j++)
{for(i=0;i<n/2;i++)
{int t;
t=a[i][j];
a[i][j]=a[i+n/2][j];
a[i+n/2][j]=t;

}
if(j==k-1)
    j=n-k;
}
for(j=k-1;j<=k;j++)
{int t;
t=a[n/4][j];
a[n/4][j]=a[3*n/4][j];
a[3*n/4][j]=t;
}
}
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{printf("%d   ",a[i][j]);
}
printf("\n\n");}
goto x;
   getch();



}
