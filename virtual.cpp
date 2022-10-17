// #include<iostream>
// using namespace std;
// class base
// {
//     public:
//     virtual void disp()
//     {
//         cout<<"Display base"<<endl;
//     }
//     void banana()
//     {
//         cout<<"banana banana"<<endl;
//     }
// };
// class derived :public base
// {   
//     public:
//      void disp()
//     {
//         cout<<"Derived"<<endl;
//     }
//     void banana()
//     {
//         cout<<"Watermelon"<<endl;
//     }
// };
// class derived2 :public base
// {   
//     public:
//      void disp()
//     {
//         cout<<"Derived 2"<<endl;
//     }
//     void banana()
//     {
//         cout<<"Watermelon 2"<<endl;
//     }
// };
// int main()
// {
//     base *p=new derived2();
//     //base p;
//     p->disp();
//    // p.disp();
//     return 0;
// }
// #include<iostream>
// using namespace std;
// class car 
// {
//     public:
//     virtual void start()=0;
//     virtual void stop()=0;
//     void transform()
//     {
//         cout<<"Redrum"<<endl;
//     }
// };
// class caddy:public car
// {
//     public:
//     void start()
//     {
//         cout<<"Caddy says vroom vroom: "<<endl;
//     }
//     void stop()
//     {
//         cout<<"Ting ting ting: "<<endl;
//     }
// };
// class cycle:public car
// {
//     public:
//     void start()
//     {
//         cout<<"Tring tring: "<<endl;
//     }
//     void stop()
//     {
//         cout<<"Khachak: "<<endl;
//     }
// };
// int main()
// {
//     car *c=new caddy();
//     //car c2;
//     c->start();
//     c->transform();
//     c=new cycle();
//     c->start();
//     return 0;
// }
// #include<iostream>
// using namespace std;
// struct a
// {
//     virtual void d()
//     {
//         cout<<"a"<<endl;

//     }
// };
// struct b:a
// {
//     void d()
//     {
//         cout<<"banana"<<endl;
//     }
// };
// void g(a&arg)
//     {
//         arg.d();
//     }
// int main()
// {
//     b x;
//     g(x);
//     return 0;
// }
// #include<iostream>
// using namespace std;
// class fun
// {
//     private:
//     int a;
//     int b;
//     public:
//     fun()
//     {
//         cout<<"Banana"<<endl;
//     }
//     ~fun()
//     {
//         cout<<"Destroyed"<<endl;
//     }
// };
// void fun2()
// {
//     fun *t=new fun();
// }
// int main()
// {
//     fun2();
//     //f1.~fun();
//     return 0;
// 
// #include<iostream>
// using namespace std;
// class test {
//     int *p;
//     public:
//     test(){
//         p=new int[10];
//         cout<<"test created"<<endl;
//     }
//     ~test(){
//         delete[]p;
//         cout<<"test destory"<<endl;
//     }
// };
// void fun(){
//     test *t=new test();
//     delete t;
// }
// int main(){
//    fun();
//    return 0;
// }
// #include<iostream>
// using namespace std;
// class a
// {
//     public:
//     a()
//     { 
//         cout<<"Banaana"<<endl;
//     }
//     void disp()
//     {
//         cout<<"displayed a"<<endl;
//     }
//     ~a()
//     {
//         cout<<"class a has been deyst "<<endl;
//     }
// };
// class b:public a
// {
//     public:
//     void disp()
//     {
//         cout<<"displayed b"<<endl;
//     }
//     ~b()
//     {
//         cout<<"b dystroyed "<<endl;
//     }
// };
// int main()
// {
//     a *p=new b();
//     //delete p;
//     return 0;
// }
#include<iostream>
using namespace std;
class a
{
    // public:
    // a()
    // { 
    //     cout<<"Banaana"<<endl;
    // }
    // void disp()
    // {
    //     cout<<"displayed a"<<endl;
    // }
    public:
    virtual ~a()=0;
    a::~a()
    {
        cout<<"Pure virtual distructor ";
    }   
};
class b:public a
{
    public:
    ~b()
    {
        cout<<"b dystroyed "<<endl;
    }
};
int main()
{
    a *p=new b();
    delete p;
    return 0;
}