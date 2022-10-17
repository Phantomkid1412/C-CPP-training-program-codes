#include<stdio.h>
/*union unjob
{
    char name[32];
    float salary ;
    int workerno;
}unjob;
struct structjob
{
    char name[32];
    float salary;
    int workerNo;
}sjob;
int main()
{
    printf("structure=%d ",sizeof(sjob));
    printf("union=%d",sizeof(unjob));
    return 0;
}*/

union employee
{
    float salary;
    int workerNo;
}j;
int main()
{
    j.salary=12.3;
    printf("Salary=%.1f\n",j.salary);
    j.workerNo=100;
    printf("Salary=%.1f\n",j.salary);
    printf("NUmber ofworkers=%d",j.workerNo);
    return 0;
}