#include<stdio.h>
void patterns(int n)
{int i,j,k;
    for(i=0;i<n;i++)
    {
        for(k=n-1;k>i;k--)
            printf(" ");
        for(j=0;j<=i;j++)
            printf("* ");
        printf("\n");
    }
    printf("\n");
    for(i=0;i<n;i++)
    {
        for(k=0;k<i;k++)
            printf(" ");
        for(j=n-1;j>=i;j--)
            printf("* ");
        printf("\n");
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            if(i==0||i==n-1||j==0||j==n-1||i==j||i==n-1-j)
                printf(" * ");
            else
                printf("   ");
        printf("\n"); }
}
int main()
{   int n;
    scanf("%d",&n);
   patterns(n);
return 0;
}
