#include<stdio.h>
void main()
{
    int n,i=0;
    printf("Enter the limit");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d\n",i);
        i=i+2;
    }
}