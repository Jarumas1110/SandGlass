#include<stdio.h>
int main()
{
    int i,j,n;
    scanf_s("%d",&n);
    for (i = n ; i > 1; i--)
    {
        for (j = i; j < n; j++)
        {
            printf(" ");
        }for (j = 1; j <= (2 * i - 1); j++)
        {
            printf("*");
        }
        
        
        printf("\n");
    }
    for (i = 1; i <= n; i++)
    {
        for (j = i; j < n; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= (2 * i - 1); j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
/*#include<stdio.h>
int main()
{
    int n, i, j, k;
    scanf_s("%d", &n);
    for (i = (n+1)/2; i >=1; i--)
    {

        for (j = 1; j <= (n + 1) / 2; j++)
        {
            printf(" ");
        }
        for (j = i; j >= 1; j--)
        {
            printf("*");
        }
        printf("\n");
    }
    for (i = 1; i <= n-1; i++)
    {
        printf(" ");
    }printf("*");
    for (i = 1; i <= n - 1; i++)
    {
        printf(" ");
    }printf("\n");
    for (i = 1; i <= n -1; i++)
    {
        for (j = (n - 1) / 2; j >= i; j--)
        {
            printf(" ");
        }
        for (j = 3; j <= (2 * i) - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    printf("\n");
   
}

*/