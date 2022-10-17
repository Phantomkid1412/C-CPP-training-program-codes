#include<stdio.h>
/*int fun()
{
    int count=0;
    count++;
    return count;
}*/
void main()
{
    int a[3][3];
    int count=0;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            a[i][j]=count;
            count++;
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }


}