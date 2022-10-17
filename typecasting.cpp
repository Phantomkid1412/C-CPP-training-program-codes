/*#include<iostream>
using namespace std;
int a=4;
double b=a;
// double a=4.2325;
// int b=a;
int main()
{  
    cout<<b;
    return 0;
}*/
// #include<iostream>
// using namespace std;
// typedef unsigned char BYTE;
// void f()
// {
//     char ch;
//     int i=65;
//     float f=2.5;
//     double db1;
//     ch=static_cast<char>(i);
//     db1=static_cast<double>(f);
//     i=static_cast<BYTE>(ch);
//     cout<<ch<<" "<<db1<<" "<<i;
// }
// int main()
// {
//     f();
//     return 0;   
// }
// #include<iostream>
// using namespace std;
// struct ty
// {
//     int x;
//     int y;
//     char c;
//     bool b;
// };

// int main()
// {
//     ty s;
// s.x=5;
// s.y=10;
// s.c='a';
// s.b=true;
//     int *p=reinterpret_cast<int*>(&s);
//     cout<<sizeof(s)<<endl;
//     cout<<*p<<endl;
//     p++;
//     cout<<*p<<endl;
//     p++;
//     char *ch=reinterpret_cast<char*>(p);
//     cout<<*ch<<endl;
//     ch++;
//     bool *n=reinterpret_cast<bool*>(ch);
//     cout<<*n<<endl;

//     cout<<*(reinterpret_cast<bool*>(ch));
//     return 0;
// }
// #include<iostream>
// using namespace std;
// class A
// {
//     public:
//     void fun_a()
//     {
//         cout<<"In class A\n";
//     }
// };
// class B
// {
//     public:
//     void fun_b()
//     {
//         cout<<"In class B\n";
//     }
// };
// int main()
// {
//     B *x=new B();
//     A *new_a=reinterpret_cast<A*>(x);
//     x->fun_b();
//     new_a->fun_a();
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int fun(int * ptr)
// {
//     return(*ptr+10);
// }
// int main(void)
// {
//     const int val=10;
//     const int *ptr=&val;
//     int *ptr1=const_cast<int *>(ptr);
//     cout<<fun(ptr1);
//     return 0;
// }
// #include<iostream>
// using namespace std;
// class b
// {
//     public:
//     virtual void test()
//     {

//     }
// };
// class d:public b{};
// void f(b* pb)
// {
//     d* pd1=dynamic_cast<d*>(pb);
//     d* pd2=static_cast<d*>(pb);
// }
// int main()
// {
//     b* pb;
//     return 0;
// }
// #include<iostream>
// using namespace std;
// class complx
// {
//     public:
//     double real,imag;
//     public:
//     complx(double real=0.,double imag=0.);
//     complx operator+(const complx&)const;
// };
// complx::complx(double r,double i)
// {
//     real=r;imag=i;
// }
// complx complx::operator+(const complx& c)const
// {
//     complx result;
//     result.real=(this->real+c.real);
//     result.imag=(this->real+c.imag);
//     return result;
//     //result.img=(this->i)
// }
// int main()
// {
//     complx x(4,4);
//     complx y(6,6);
//     complx z=x+y;
//     cout<<z.real;
//     //cout<<z.imag;
//     return 0;
// }
#include<iostream>
using namespace std;
class overload
{
    private:
    int a;
    int b;
    int z;
    public:
    overload():a(0),b(0)
    {}
        void in()
        {
            cout<<"Enter the first number: ";
            cin>>a;
            cout<<"Enter the second number: ";
            cin>>b;
        }
    void operator--()
    {
        a=--a;
        b=--b;
    }
    void out()
    {
        cout<<"The decremented elements of the object "<<a<<" "<<b<<endl;
    }
    
    overload operator *()
    {
        z=a*b;
    }
    void out2()
    {
        cout<<"The multiplied elements of the object "<<z;
    }
    
};
int main()
{
    overload obj;
    obj.in();
    --obj;
    obj.out();
    obj.out2();
    return 0;
}