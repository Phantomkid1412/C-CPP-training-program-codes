#include<stdio.h>
/*int fun()
{
    int count=0;
    count++;
    return count;
}*/
void main()
{
    int arr[5]={10,20,30,40};
    printf("%d ",arr[-3]);
    printf("%d ",arr[8]);
    int n=sizeof(int);
    printf("%d",n);
     n=sizeof(arr[0]);
     printf("%d",n);

}