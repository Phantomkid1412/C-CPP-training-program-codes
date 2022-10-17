// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     vector<int> a;
//     for(int i=0;i<=5;i++)
//         a.push_back(i);
//         cout<<"Size:"<<a.size();
//         cout<<"\nCapacity: "<<a.capacity();
//         cout<<"\nMax_size: 0"<<a.max_size();
//         a.resize(4);
//         cout<<"\nSize: "<<a.size();
//     return 0;
// }
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     vector<int> a;
//     cout<<"\nCapacity: "<<a.capacity();
//     cout<<"\nMax_size: "<<a.max_size();
//     a.resize(4);
//     cout<<"\nSize: "<<a.size();
//     if(a.empty()==false)
//     cout<<"\nVevtor in not empty";
//     else
//     cout<<"\nVector is empty";
//     return 0;
// }
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     vector<int> a;
//     for(int i=0;i<=5;i++)
//     {
//         a.push_back(i);
//         cout<<"Size:"<<a.size();
//         cout<<"\nCapacity: "<<a.capacity();
//         cout<<"\nMax_size: 0"<<a.max_size();
//         a.resize(4);
//         cout<<"\nSize: "<<a.size();
//     }
//     return 0;
// }
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     vector<int> a;
//     for(int i=1;i<=10;i++)
//     {
//         a.push_back(i*10);
//     }
    
//         cout<<"\nReference operator [g}:a[2]="<<a[2];
//         cout<<"\nat:a.at(4)= "<<a.at(4);
//         cout<<"\nfront():a.front()= "<<a.front();
//         cout<<"\nback():a.back()= "<<a.back();
//         int *pos=a.data();
//         cout<<"\n The first element is "<<*pos;
//     return 0;
// }
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// #define row 3
// #define col 3
// int main()
// {
//     vector<vector<int>>a;
//     int num=10;
//     for(int i=0;i<row;i++)
//     {
//         vector<int> a1;
//         for(int j=0;j<col;j++)
//         {
//             a1.push_back(num);
//             num+=5;
//         }
//         a.push_back(a1);
//     }
//     cout<<"2D vector contains: "<<"\n";
//     for(int i=0;i<a.size();i++)
//     {
//         for(int j=0;j<a[i].size();j++)
//         cout<<a[i][j]<<" ";
//         cout<<endl;
//     }
//     a[2].pop_back();
//     a[1].pop_back();
//     cout<<"2d vector traversal after deletion"<<"\n";
//     for(int i=0;i<a.size();i++)
//     {
//         for(auto it=a[i].begin();it!=a[i].end();it++)
//         cout<<*it<<" ";
//         cout<<endl;
//     }
//     return 0;

// }
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     vector<int>num{1,2,3,4,5};
//     vector<int>::iterator iter;
//     for(iter=num.begin();iter!=num.end();++iter)
//     cout<<*iter<<" ";
//     return 0;
// }
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// void print(list <int>lst)
// {
//     list<int>::iterator it;
//     for(it=lst.begin();it!=lst.end();++it)
//     {
//         cout<<*it<<" ";
//     }
//     cout<<"\n";
// }
// int main()
// {
//     list<int> list1,list2;
//     for(int i=0;i<5;++i)
//     {
//         list1.push_back(i);
//         list2.push_back(i+5);
//     }
//     cout<<"\nList 1 (list1) is:";
//     print(list1);
//     cout<<"\nList 2 (list2) is:";
//     print(list2);
//     cout<<"\nlist1.front(): "<<list1.front();
//     cout<<"\nlist1.back():"<<list1.back();
//     cout<<"\nlist1.pop_front(): ";
//     list1.pop_front();
//     print(list1);
//     cout<<"\nlist2.pop_back():";
//     list2.pop_back();
//     print(list2);
// }
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// void showcontent(list <int>l)
// {
//     list<int>::iterator it;
//     for(it=l.begin();it!=l.end();it++)
//     {
//         cout<<*it<<" ";
//     }
//     cout<<"\n";
// }
// int main()
// {
//     list<int> list1,list2;
//     int i;
//     for(int i=0;i<10;i++)
//     {
//         list1.push_back(i+1);
//     }
//     for(int i=0;i<10;i++)
//     {
//         list2.push_front(i+1);
//     }
//     cout<<"Content of list 1";
//     showcontent(list1);
//     cout<<"Content of list 2";
//     showcontent(list2);
//     int times=5;
//     while(times--)
//     {
//         list1.pop_front();
//     }
//     cout<<"Content of list 1: ";
//     showcontent(list1);
//     cout<<"After removal list 1:";
//     showcontent(list1);
//     cout<<"No. of elements in list 1:";
//     cout<<list1.size()<<"\n";
//     list2.reverse();
//     cout<<"Reversed list 2: ";
//     showcontent(list2);
//     list1.clear();
//     if(list1.empty())cout<<"List 1 is now empty\n";
//     else
//     cout<<"Not empty\n";
//     list1.assign(5,2);
//     cout<<"List 1: ";
//     showcontent(list1);
//     return 0;
// }
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     set<string> s{"iphone","android","basic","landline"};
//     set<char> c{'a','b','c','d'};
//     set<int> i{1,3,4,5};
//     for(auto kt=s.begin();kt!=s.end();++kt)
//     {
//         cout<<' '<<*kt;

//     }
//     cout<<endl;
//     for(auto kt=c.begin();kt!=c.end();++kt)
//     {
//         cout<<' '<<*kt;
        
//     }
//     cout<<endl;
//     for(auto kt=i.begin();kt!=i.end();++kt)
//     {
//         cout<<' '<<*kt;
        
//     }
//     return 0;
// }
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     set<string> s{"iphone","android","basic","landline"};
//     set<char> c{'a','b','c','d'};
//     set<int> i{1,3,4,5};
//     for(int k=0;k<4;k++)
//     {
//         i.insert('a'+1);
//     }
//     cout<<"string_set_size:"<<i.size();
//     cout<<endl;
//     cout<<"string_set size:"<<s.size();
//     return 0;
// }
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     set<int> s={10,12,15,6};
//     set<int>::iterator it;
//     cout<<"First element is: "<<*(s.begin());
//     cout<<"\nLast element is:"<<*--(s.end())<<endl;
//     for(auto it=s.begin();it!=s.end();it++)
//     {
//         cout<<" "<<*it;
//     }
//     cout<<endl;
//     if(s.empty())
//     cout<<"Empty";
//     else
//     cout<<"Not empty";
//     cout<<"\nSize of the set: "<<s.size();
//     cout<<"\nMax size: "<<s.max_size();
//     s.erase(s.begin());
//     s.erase(12);
//     cout<<"\nAfter removing the first element and the element 12";
//     for(auto it=s.begin();it!=s.end();it++)
//     {
//         cout<<" "<<*it;
//     }
//     s.insert(5);
//     cout<<"\nAfter inserting the new element 5: ";
//     for(auto it=s.begin();it!=s.end();it++)
//     {
//         cout<<" "<<*it;
//     }
//     if(s.count(15)==1)
//     cout<<endl<<"15 is presnt in the set";
//     else cout<<endl<<"15 i not present";
//     s.clear();
//     if(s.empty())
//     cout<<"\nNow, the set is empty";
//     else
//     cout<<"\nSet is not empty";
//     return 0;
// }
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     map<int ,string> m;
//     m.insert(pair<int,string>(1,"one"));
//     m.insert(pair<int,string>(2,"two"));
//     return 0;
// }
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     map<int,map<int,string>>nm;
//     nm[1][1]="one";
//     cout<<nm[1][1]<<endl;
//     return 0;
// }
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int ,string> m;
    m.insert(pair<int,string>(1,"one"));
    m.insert(pair<int,string>(1,"two"));
    cout<<m['one'];
    return 0;
}