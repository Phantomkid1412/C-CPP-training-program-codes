#include<iostream>
using namespace std;
int main()
{
    int var=0;
    cout<<"catch all or def"<<endl;
try 
{
    if(var==0)
    {
    throw var;
    }
}
catch(float ex)
{
    cout<<"Float exception catch: Value:"<<ex;
}catch(...)
{
    cout<<"Default exception catch";
}
}
// #include<iostream>
// using namespace std;
// void test(int x)
// {
//     try
//     {
//         if(x>0)
//         {
//             throw x;
//         }
//         else
//         throw 'x';
//     }catch (int x){
//         cout<<"Catching an interger"<<endl;
//     }
//     catch(char a)
//     {
//         cout<<"Catching a character"<<endl;
//     }
// }
// int main()
// {
//     test('p');
//     return 0;
// }
// #include<iostream>
// using namespace std;
// void exceptionFunction()
// {
//     try
//     {
//         throw;
//     }
//     catch(int x)
//     {
//         cout<<"Wrong out"<<x;
//     }
    
// }
// int main()
// {
//     int var=0;
//     cout<<"Simple program for rethrowing"<<endl;
//     try
//     {
//         exceptionFunction();
//     }
//     catch(int ex)
//     {
//         cout<<"\nWrong input"<<ex;
//     }
    
// }
// #include<iostream>
// #include<exception>
// using namespace std;
// struct myexception:public exception{
//     const char *what() const throw(){
//         return "c++ exception";
//     }
// };
// int main()
// {
//     try 
//     {
//         throw myexception();
//     }catch(myexception & e)
//     {
//         cout<<"my exception caught"<<endl;
//         cout<<e.what()<<endl;
//     }catch(exception &e)
//     {

//     }
// }
// #include<iostream>
// #include<exception>
// using namespace std;
// class Sample{
//    public:
//       Sample() {
//          int i =0;
//          cout << "Construct" << endl;
//          throw i;
//       }
//       ~Sample() {
//          cout << "Destruct " << endl;
//       }
// };
// int main() {
//    try {
//       Sample s1;
//    } catch(int i) {
//       cout << "Caught " << i << endl;
//    }
// }