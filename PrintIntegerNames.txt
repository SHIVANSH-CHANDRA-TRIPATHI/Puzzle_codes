#include<stdio.h>
#include<conio.h>
void zeros(int);
void tens(int);
void hundreds(int);
void thousands(int);
int n;
char a[20][10]={"one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"},b[8][10]={"twenty","thirty","fourty","fifty","sixty","seventy","eighty","ninety"};
void main()
{
scanf("%d",&n);
if(n==0)
    printf("zero");
else
{if(n<10)
    zeros(n);
    if(n>=10&&n<100)
        tens(n);
        if(n>=100&&n<1000)
            hundreds(n);
            if(n>=1000&&n<100000)
            thousands(n);
}

}
void zeros(int n)
{
   printf("%s ",a[n-1]);
}
void tens(int n)
{
    int d;
    d=(n%10)+((n/10)%10)*10;
    if(d!=0)
    {
            if(d<20)
            printf("%s ",a[d-1]);
            else
            printf("%s %s",b[(n/10)%10-2],a[n%10-1]);
    }
}

void hundreds(int n)
{int d;
d=(n/100)%10;
if(d!=0)
printf("%s hundred ",a[d-1]);
if(n%100!=0)
printf("and ");
tens(n);
}
void thousands(int n)
{
int d;
d=n/1000;
tens(d);
printf(" thousand ");
if(n%1000!=0)
hundreds(n);
}
