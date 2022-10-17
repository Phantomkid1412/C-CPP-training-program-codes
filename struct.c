//#include<stdio.h>
/*struct point
{
    int x,y;

};*/
/*
int main()
{
    struct point p1={2,5};
    struct point *p2=&p1;
    printf("%d %d",p2->x,p2->y);
    return 0;
}*/
/*int main()
{
    struct point arr[10];
    struct point aa;
    arr[0].x=10;
    arr[0].y=20;
    aa.x=20;
    aa.y=30;
    printf("%d %d",aa.x,arr[0].y);
}*/
/*struct adress
{
    int pin;
    char city[24];
    char phone[14];
};
struct employee
{
    char name[20];
    struct adress add;
};
void display(struct employee emp)
{
    printf("Following are the details \n");
    printf("%s %s %d %s",emp.name,emp.add.city,emp.add.pin,emp.add.phone);
}
int main()
{
    struct employee emp;
    printf("Enter employee information \n");
    scanf("%s %s %d %s",emp.name,emp.add.city,&emp.add.pin,emp.add.phone);
    display(emp);
    return 0;
}*/
#include<stdio.h>



struct addr
{
    char city[30];
    int pincode;
    char ph [13];
    int id;
};

struct employee
{
    char name[26];
    struct addr add;
};

void display(struct employee emp)
{
    printf("print th details...\n ");
    printf(" name=%s  city=%s pin=%d ph=%s id=%d", emp.name,emp.add.city, emp.add.pincode, emp.add.ph,emp.add.id);
}

void main()
{
    struct employee emp;
    printf(" ether the detalis ....\n");
    scanf("%s  %s %d %s %d" ,emp.name,emp.add.city,&emp.add.pincode, emp.add.ph,&emp.add.id);
    display(emp);

}

