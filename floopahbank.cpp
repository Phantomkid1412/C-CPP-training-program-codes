#include<iostream>
#include<fstream>
using namespace std;
class Menu 
{
    public:
    void m2()
    {
        int choice;
        cout << "Welcome To L&G Bank" << endl << "1. New User Registeration.\n2. Existing User Login.\n3. Exit\nEnter Your Choice.";
        cin >> choice;
        switch (choice)
        {
        case 1:
        //Open_acc(&head);
        m2();
        break;
        case 2:
        //loginUser(&head);
        break;
        case 3:
        exit(0);
        default:
        cout << "\t\t\t\t\tENTER A VALID OPTION" << endl;
        m2();
        break;
        }
    }
    Menu()
    {
    cout<<"\t\t\t\t\t Welcome to Bank of noida\n";
    cout<<"****************************************************************************************************************"<<endl;
    int choice_prof;
    int choice_prof2;
    cout<<"\t\t\t\t\t 1.CUSTOMER LOGIN\n";
    cout<<"\t\t\t\t\t 2.BANK EMPLOYEE\n";
    cin>>choice_prof;
    if(choice_prof==1)
    {
        m2();
    }
    else if(choice_prof==2)
    {
        cout<<"\t\t\t\t\t 1.Branch manager\n";
        cout<<"\t\t\t\t\t 2.Admin\n";
        cin>>choice_prof2;
        if(choice_prof2==1)
        {
           // mm();
        }
        else if(choice_prof2==2)
        {
            //Admin();
        }
        else
        {
            cout<<"\t\t\t\t\t  Invalid choice\n";
            Menu();
        }
    }
    else
        {
            cout<<"\t\t\t\t\t  Invalid choice\n";
            Menu();
        }
    } 
};
int main()
{
    Menu();
    return 0;
}