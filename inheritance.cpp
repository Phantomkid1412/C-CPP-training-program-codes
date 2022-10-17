/*#include<iostream>
using namespace std;
class fun1
{
    private:
    int a=4;
    int b=2;
    public:
    int ans1=a+b;
};
class fun2 :public fun1
{
    private:
    int p=4;
    int q=2;
    public:
    int ans2=p-q;
};
class fun3 :public fun2
{
    private:
    int m=4;
    int n=2;
    public:
    int ans=m*n;
};
fun3 f;
int main()
{
    return 0;
    cout<<"pope";
    cout<<f.ans;
}*/
// #include<iostream>
// using namespace std;
// class base
// {
//     public:
//     float salary=900;
// };
// class derived:public base
// {
//     public:
//     float bonus=100;
//     void sum()
//     {
//         cout<<"Totoal salry is: "<<(salary+bonus)<<endl;
//     }
// };
// int main()
// {
//     derived x;
//     x.sum();
//     cout<<"Salary:"<<x.salary<<endl;
//     cout<<"Bonus:"<<x.bonus<<endl;
// }
// #include<iostream>
// using namespace std;
// class a
// {
//   public:
//   void print()
//   {
//     cout<<"Banana";
//   }  
// };
// class b :public a
// {

// };
// class c :public b
// {

// };
// int main()
// {
//     c c1;
//     c1.print();
// }
// #include<iostream>
// using namespace std;
// //diamond 
// class d
// {
//     public:
//     void print()
//     {
//         cout<<"top of the diamond";
//     }
// };
// class a :public d
// {
//     public:
//     void print2()
//     {
//         cout<<"bulbasaur  ";
//     }
// };
// class b :public d
// {
// };
// class c :public a,public b
// {

// };
// c c1;
// int main()
// {
//     c1.print2();
//     c1.a::print();
//     return 0;
//}
#include<iostream>
using namespace std;
class a
{
   private:
  void print1()
  {
    cout<<"Private Banana";
  }  
  protected:
  void print2()
  {
    cout<<"Protechted Banana";
  } 
  public:
  void print3()
  {
    cout<<"Banana";
  }  
};
class b :private a
{

};
class c :protected b
{

};
int main()
{
    c c1;
    c1.print1();
    c1.print2();
    c1.print3();
}