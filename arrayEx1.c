#include<stdio.h>
/*int fun()
{
    int count=0;
    count++;
    return count;
}*/
void main()
{
    int arr[5]={10,-20,30,40};
    arr[3/2]=2;
    arr[3]=arr[0];
    int arr1[5];
    arr1[0]=2;
    arr1[1]=2;
    arr1[2]=2;
    arr1[3]=2;
    arr1[4]=2;
    printf("%d %d %d %d %d ",arr[0],arr[1],arr[2],arr[3],arr[4]);
    printf("%d %d %d %d %d",arr1[0],arr1[1],arr1[2],arr1[3],arr1[4]);
}