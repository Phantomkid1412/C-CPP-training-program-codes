// #include<iostream>
// using namespace std;
// class Distance
// {
//     private:
//     int meter;
//     friend int addfive(Distance);
//     public:
//     Distance():meter(0){}
// };
// int addfive(Distance d)
// {
//     d.meter+=5;
//     return d.meter;
// }
// int main()
// {         
//     Distance d;
//     cout<<"Distance: "<<addfive(d);
//     return 0;
// }
// #include<iostream>
// using namespace std;
// class b;
// class a
// {   
//     public:
//     a():numa(1){}
//     private:
//     int numa;
//     friend int add(a,b);
// };
// class b:public a
// {
//     public:
//     b():numb(5){}
//     private:
//     int numb;
//     friend int add(class a,class b);
// };
// int add(a objecta,b objectb){
//     return(objecta.numa+objectb.numb);
// }
// int main()
// {
//     a objecta;
//     b objectb;
//     cout<<"Sum: "<<add(objecta,objectb);
//     return 0;
// }
// #include<iostream>
// using namespace std;
// class a
// {
//     private:
//     int numa=50;
//     friend class b;
//     public:
//     a():numa(12){}
// };
// class b
// {
//     private:
//     int numb=40;
//     public:
//     b():numb(1){}
// int add()
// {
//     a objecta;
//     return objecta.numa+numb;
// }
// };
// int main()
// {
//     b objectb;
//     cout<<"Sum: "<<objectb.add()<<endl;
//     return 0;
// }
// #include<iostream>
// using namespace std;
// class a
// {
//     friend class b;
//     int a1;
// };
// class b{};
// class c:public b{
//     void f(a* p)
//     {
//         //p->a1=2;
//     }
// };
// int main()
// {
//     cout<<"working";
//     return 0;
// }
// #include<iostream>
// using namespace std;
// void fun(float)
// {
//     cout<<"Data type:float\n";
// }
// int fun(int)
// {
//     cout<<"Data type:int\n";
//     return 2;
// }
// void fun(int)
// {
//     cout<<"Data type:int\n";
// }
// int main()
// {
//     fun(1.02f);
//     fun(22);
//     fun(1.02f);
//     fun(22);
//     return 0;
// }
// #include<iostream>
// using namespace std;
// void multiply(int a,int b)
// {
//     cout<<"a*b="<<a*b<<endl;
// }
// void multiply(double a,int b)
// {
//     cout<<"a*b="<<a*b<<endl;
// }
// void multiply(double a,double b)
// {
//     cout<<"a*b="<<a*b<<endl;
// }
// int main()
// {
//     multiply(2.22,2.22);
//     multiply(2,2);
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int add(int a)
// {
//     int b=10;
//     return a+b;
// }
// int add(int a,int b=10)
// {
//     return a+b;
// }
// int main()
// {
//     int a=5;
//     cout<<"a+b="<<add(a)<<endl;
//     return 0;
// }
