#include<stdio.h>
int main()
{
    int n;
    printf("Enter number for factorial ");
    scanf("%d",&n);
    int ans=1;
    while(n>1)
    {
        ans=ans*n;
        n--;
    }
    printf("%d",ans);
    return 0;
}