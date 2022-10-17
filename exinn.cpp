// #include<iostream>
// using namespace std;
// /*class inside
// {
//     public:

// };*/
// class outside
// {
//     public:
//     class nested
//     {
//         public:
//         static int x;
//         static int y;
//         int f();
//         int g();
//     };
// };
// int outside::nested::x=5;
// int outside::nested::f(){
//     cout<<"Hello world";
//     return 0;}
// typedef outside::nested outnest;
// int outnest::y=10;
// int outnest::g(){
//     return 0;
// }
// int main()
// {
//     outside::nested t;
//     //t.x;
//     t.f();
//     return 0;
// }
// #include<iostream>
// using namespace std;
// class a
// {
//     public:
//     class b{
//         void print2()
//         {
//             cout<<"hello";
//         }
//     };
//     b *z;
//     class c : private b{
//         public:
//         void print()
//         {
//             cout<<"hello";
//         }
//         b y;
//         c *x;
//     };
// };
// int main()
// {
//     a::c y2;
//     y2.print();
//     y2.print1();
// }
// #include<iostream>
// #include<string>
// using namespace std;
// class Poingable {
// public:
// virtual void poing() = 0;
// };
// void callPoing(Poingable& p) {
// p.poing();
// }
// class Bingable {
// public:
// virtual void bing() = 0;
// };
// void callbing(bingable &b)
// {
//     b.bing();
// }
// class outer
// {
//     string name;
//     class inner1;
//     friend class outer:innre1;
//     class inner1:public poingable
//     {
//         outer *parent;
//         public:
//         inner(outer* p): parent(p)
//         {}
//         void poing()
//         {
//         cout<<"poing called for"<<parent->name<<endl;
//         }
//     }inner1;
//     class inner2;
//     friend class outer::inner2;
//     class inner2:public bingavle
//     {
//         outer *parent;
//         public:
//         inner2(outer* p):parent(p){}
//         void bing()
//         {
//             cout<<"bing called for"<<parent->name<<endl;
//         }
//     }inner2;
//     public:
//     outer(const string&nm)
//     :name(nm),inner1(this),inner2(this){}
//     operator poingable&(){return inner1;}
//     operator binable&(){return inner2;}
// };
// int main()
// {
//     return 0;
// }
// #include <iostream>
// #include <string>
// using namespace std;
// class Poingable {
// public:
// virtual void poing() = 0;
// };
// void callPoing(Poingable& p) {
// p.poing();
// }
// class Bingable {
// public:
// virtual void bing() = 0;
// };
// void callBing(Bingable& b) {
// b.bing();
// }
// class Outer {
// string name;
// class Inner1;
// friend class Outer::Inner1;
// class Inner1 : public Poingable {
// Outer* parent;
// public:
// Inner1(Outer* p) : parent(p) {}
// void poing() {
// cout << "poing called for "
// << parent->name << endl;
// }
// } inner1;
// class Inner2;
// friend class Outer::Inner2;
// class Inner2 : public Bingable {
// Outer* parent;
// public:
// Inner2(Outer* p) : parent(p) {}
// void bing() {
// cout << "bing called for "
// << parent->name << endl;
// }
// } inner2;
// public:
// Outer(const string& nm)
// : name(nm), inner1(this), inner2(this) {}
// operator Poingable&() { return inner1; }
// operator Bingable&() { return inner2; }
// };
// int main() {
// Outer x("Ping Pong");
// callPoing(x);
// callBing(x);
// }
#include<iostream>
using namespace std;
class a
{
    public:
     int n,m;
     a():n(10),m(20){}
};
int main()
{
    a a1;
    cout<<a1.n<<endl;
    cout<<a1.m<<endl;
}