#include<stdio.h>
#include<stdlib.h>
/*int main()
{
    int a;
    printf("%d",&a);
}*/
/*int main()
{
    int *pc,c;
    c=22;
    printf("Address of c: %p\n",&c);
    printf("Value of c: %d\n\n",c);
    pc=&c;
    printf("Address of pointer pc: %p\n,pc");
    printf("Content of pointer pc: %d\n\n,*pc");
    c=11;
    printf("Address of pointer pc: %p\n",pc);
    printf("Content of pointer pc: %d\n\n",*pc);
    *pc=2;
    printf("Address of c: %p\n",&c);
    printf("Value of c: %d\n\n",c);
    return 0;
}*/
/*int main()
{
    char *str;
    {
        char a='A';
        str=&a;
    }
    printf("%c",*str);
}*/
/*int main()
{
    int *ptr=NULL;
    printf("The value of ptr is: %x\n",ptr);
    return 0;
}*/
/*int main()
{
    int *ptr=(int*)malloc(sizeof(int));
    int a=560;
    ptr=&a;
    free(ptr);
    ptr=NULL;
    return 0;
}*/
/*int *fun()
{
   static int y=10;
    return &y;
}
int main()
{
    int *p=fun();
    printf("%d",*p);
    return 0;
}*/
/*int addition();
int multiply(int a);
int main()
{
   int result;
   int ans2;
   int temp=2;
   int (*ptr)();
   ptr=&addition;
   result=(*ptr)();
   printf("The sum is %d",result);
   ptr=&multiply(temp);
      ans2=(*ptr)();

   printf("The sum is %d",ans2);
}
int multiply(int a)
{
    int a,b;
    printf("Enter two numbers?");
    scanf("%d %d",&a,&b );
    return a*b;

}
int addition()
{
    int a,b;
    printf("Enter two numbers?");
    scanf("%d %d",&a,&b);
    return a+b;
}*/
