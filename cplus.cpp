/*#include<iostream>
using namespace std;
namespace first
{
    int x=5;
    int y=10;
}
namespace second
{
    double x=3.142857;
    double y=33.2;
}
int main()
{
    using namespace first;
   // using second::y;
    cout<<x<<endl;
    cout<<y<<endl;
    cout<<first::y<<endl;
    cout<<second::x<<endl;
    return 0;
} */

/*#include<iostream>
using namespace std;
namespace foo
{
    int value()
    {
        return 22;
    }
} 
namespace bar
{
    const double pi=3.142857;
    double value()
    {
        return 2*pi;
    }
} 


int main()
{
    cout<<foo::value()<<endl;
    cout<<bar::value()<<endl;
    cout<<bar::pi;
    return 0;
}*/
// #include<iostream>
// using namespace std;
// namespace add
// {
//     int a;
//     int b;
//     int val()
//     {
//         return a+b;
//     }
// }
// namespace subs
// {
//     int a;
//     int b;
//     int val()
//     {
//         return a-b;
//     }
// }
// namespace mul
// {
//     int a;
//     int b;
//     int val()
//     {
//         return a*b;
//     }
// }
// namespace divi
// {
//     int a;
//     int b;
//     float val()
//     {
//         return a/b;
//     }
// }
// int main()
// {
//     using namespace add;
//     cout<<"Enter two numbers ";
//     cin>>a;
//     cin>>b;
//     subs::a=add::a;
//     subs::b=add::b;
//     mul::a=add::a;
//     mul::b=add::b;
//     divi::a=add::a;
//     divi::b=add::b;
//     cout<<endl<<add::val();
//     cout<<endl<<subs::val();
//     cout<<endl<<mul::val();
//     cout<<endl<<divi::val();
//     return 0;
//}

// #include<iostream>
// using namespace std;
// int main()
// {
//     //string a;
//     char a[100];
//     int p;
//     cin>>p;
//    // cin>>a;
//     //cout<<a<<endl;
//     cin.sync();
//     cin.getline(a,100);
//     cout<<a;
// }
// #include<iostream>
// using namespace std;
// int main()
// {
//     int a=2;
//     int b=3;
//     if(a+b>=10)
//     {
//         cout<<"oooo kaafi ameer"<<endl;
//     }
//     else
//     {
//         cout<<"aur hardwork crow";
//     }
// }
// #include<iostream>
// using namespace std;
// int main()
// {
//     int a=10;
//     int b=11;
//     if(a+b<10)
//     {
//         cout<<"oooo kaafi gareeb"<<endl;
//     }
//     else if(a+b>10&& a+b<20)
//     {
//         cout<<"aur hardwork crow";
//     }
//     else if(a+b>20)
//     {
//         cout<<"oooooooo kaafi ameer";
//     }
// }
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n=3;
//     int a[n];
//     for(int i=0;i<n;i++)
//     {
//         cin>>a[i];
//     }
//     for(int i=0;i<n;i++)
//     {
//         cout<<a[i]<<" ";
//     }
// }
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n=3;
//     int m=2;
//     int a[n][m];
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<m;j++)
//             cin>>a[i][j];
//     }
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<m;j++)
//         {
//         cout<<a[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n=2;
//     int a[n],b[n];
     
//     for(int i=0;i<n;i++)
//     {
//         cin>>a[i];
//     }
//     for(int i=0;i<n;i++)
//     {
//         cin>>b[i];
//     }
//     int k=0;
//     cout<<"Multiplication: ";  
//     int c[n*n];
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<n;j++)
//         {
//             c[k]=a[i]*b[j];
//             k++;

//         }
//     }
//     for(int i=0;i<n*n;i++)
//     {
//         cout<<c[i]<<" ";
//     }
//     k=0;
//     cout<<endl<<"Addition: ";
//     int add[n*n];
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<n;j++)
//         {
//             add[k]=a[i]+b[j];
//             k++;

//         }
//     }
//     for(int i=0;i<n*n;i++)
//     {
//         cout<<add[i]<<" ";
//     }
//     k=0;
//     cout<<endl<<"Substraction: ";
//     int subs[n*n];
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<n;j++)
//         {
//             subs[k]=a[i]-b[j];
//             k++;

//         }
//     }
//     for(int i=0;i<n*n;i++)
//     {
//         cout<<subs[i]<<" ";
//     }
// }
