#include <stdio.h>
#include <stdlib.h>

int det(int n,int *arr)
{
    int k,*brr,i,j,p,dex=0;
    if(n==2)
        return (*(arr))*(*(arr+3))-(*(arr+1))*(*(arr+2));

    for(i=0;i<n;i++)
    {
        brr=(int*)malloc((n-1)*(n-1)*sizeof(int));
        for(j=1;j<n;j++)
        {
            for(k=0,p=0;k<n;k++)
            {
                if(k!=i)
                {
                    *(brr+(n-1)*(j-1)+p)=*(arr+n*j+k);p++;
                }
            }
        }
        if(i%2==0)
        dex+=(*(arr+i))*det(n-1,brr);
        else dex-=(*(arr+i))*det(n-1,brr);
        free(brr);
}
        return dex;
}





int main()
{
 int i, j,n,*arr;
 printf("Enter the order of the Square Matrix: ");
    scanf("%d",&n);
    arr = (int*)malloc(n*n*sizeof(int));

printf("Enter the input Matrix:\n");
    for (i = 0; i <n; i++)
      for (j = 0; j <n; j++)
           scanf("%d",(arr + i*n + j));
         printf("%d",det(n,arr));
            free(arr);
}




