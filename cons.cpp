/*#include<iostream>
using namespace std;
class ABC
{
    private:
    int x,y;
public:
ABC()
{

}
ABC(int a)
{
    x=y=a;
}
ABC(int a, int b)
{
    x=a;
    y=b;
}
void display()
{
    cout<<"x= "<<x<<"and "<<"y= "<<y;
}
};
int main()
{
    ABC cc1;
    ABC cc2(10);
    ABC cc3(10,20);
    cc1.display();
    cc2.display();
    cc3.display();
    return 0;
}*/
/*
#include<iostream>
using namespace std;
class Line
{
    public:
    int size;
Line()
{
    size=30;
}
};
int main()
{
    Line L;
    cout<<"Line size is "<<" "<<L.size<<" "<<"cm";
    return 0;
}*/
/*#include<iostream>
using namespace std;
class Test
{
    int m,n;
public:
Test() {}
Test(int m,int n)
{
    this->m=m;
    this->n=n;
}
void print()
{
    cout<<m<<" "<<n<<endl;
}
};
int main()
{
    int e=2;
     Test t[e];
for(int j=0; j<e; j++)
{
    t[j]= Test(j,j+1);
}
for(int j=0;j<e;j++)
{
    t[j].print();
}
return 0;
}*/
/*#include<iostream>
using namespace std;
class Line
{
    int size;
    public:
    Line()
    {}
    Line(int size)
    {
        size=size+10;
    }
    void display()
    {
        cout<<size;
    }
};
int main()
{
    int p=20;
    Line *L=new Line(p);
    L->display();
    return 0;
}*/
// 
// #include<iostream>
// using namespace std;
// class area
// {
//     private:
//     int m=2,n=3,ans;
//     area()
//     {}
//     area(){
//     ans=m*n;
//     cout<<ans;
//     }   
//     public:
//     static area disp(){
//         //cout<<ans;
//         static area b();
//         m++;
//         return b;
//     }
// };
//     int main(){
//     area c=area::disp();
//     // if()
//     area c1=area::disp();
//     return 0;
// }
#include<iostream>
using namespace std;
class area
{
    int a,b;
    int ans;
    public:
    area()
    {
    }
    area calc(int x,int y)
    {
        ans=x*y;
    }''
};
int main()
{

    return 0;
}