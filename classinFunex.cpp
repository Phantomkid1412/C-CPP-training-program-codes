// #include<iostream>
// using namespace std;
// int x;
// void f()
// {
//     static int y=10;
//     int x;
//     extern int g();
//     class local
//     {
//         public:
//         //int g(){return x;}
//         int h()
//         {
//             cout<<y<<"\n";
//             return y;
//         }
//         int k()
//         {
//             return ::x;
//         }
//         int l()
//         {
//             return g();
//         }
//     };
//     local l;
//     l.h();
//     int q=l.h();
// }

// int main()
// {
//     f();
//     int p=f()::q;
//     cout<<p+2;

//   // cout<<q;
//    // local *z;

//     return 0;
// }
// #include<iostream>
// using namespace std;
// void f()
// {
//     class local
//     {
//         int f();
//         int g(){return 0;}
//         static int a;
//         int b;
//     };
// }
// int main()
// {
//     return 0;
// }
// #include<iostream>
// using namespace std;
// void f()
// {
//     class local
//     {
//        public:
//         void disp()
//         {
//             cout<<"Landis n gyr";
//         }
//     };
//     local l1;
//     l1.disp();
// }
// #include<iostream>
// using namespace std;
// int x;
// void fun()
// {
// class test1
// {
//     public:
//     test1(){
//         cout<<"First class: "<<endl;
//     }
// };
// class test2
// {
//     test1 t1;
//     public:
//     void method()
//     {
//         cout<<"x= "<<x<<endl;
//     }
// };
// test2 t2;
// t2.method();
// }

// int main()
// {
//     fun();
//     return 0;
// }
// #include<iostream>
// using namespace std;
// void fun()
// {
// class test
// {
//     public:
//     void dis1(){
//         cout<<"Red "<<endl;
//     }
//     void dis2(){
//         cout<<"Black "<<endl;
//     }
// };
// class test1 :public test
// {
//     public:
//     void dis1(){
//         cout<<"one "<<endl;
//     }
//     void dis2(){
//         cout<<"tow "<<endl;
//     }
// };
// class test2 :public test
// {
//     public:
//     void dis1(){
//         cout<<"three "<<endl;
//     }
//     void dis2(){
//         cout<<"four "<<endl;
//     }
// };
// //test *t1=new test1();
// test *t1=new test1();

// t1->dis1();
// }

// int main()
// {
//     fun();
//     return 0;
// }
// #include<iostream>
// using namespace std;
// class
// {
//     public:
//     int x;
//     int y;
//     void getdata(int x)
//     {
//         this->x=x;
//     }
//     void setdata()
//     {
//         cout<<x;
//     }
// }o1,o2;
// int main()
// {
//     o1.setdata();
//     return 0;
//}
// #include<iostream>
// using namespace std;

// typedef class
// {
//     public:
//     int x;
//    // int y;
//     void getdata(int a)
//     {
//         this->x=a;
//     }
//     void setdata()
//     {
//         cout<<x;
//     }
// }o1;
// int main()
// {
//     o1 p;
//     p.getdata(20);
//     p.setdata();
//     return 0;
// }
#include<iostream>
using namespace std;

typedef class
{
    public:
    int x=20;
   // int y;
    void getdata(int a)
    {
        this->x=a;
    }
    void setdata()
    {
        cout<<x;
    }
}o1;
class b:public o1
{
    public:
    void disp()
    {
        x=x+10;
        cout<<"\t"<<x;
    }
}q;
int main()
{
    o1 p;
    p.getdata(20);
    p.setdata();
    q.disp();
    return 0;
}