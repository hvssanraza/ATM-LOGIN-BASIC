#include <iostream>
using namespace std;

int main()
{
    int userPassword, attempts = 3;
    const int correctPassword = 0000;

    cout<<"----Welcome to HBL ATM----"<<endl;

    while (attempts > 0)
    {
        cout<<"Please enter your PIN to Proceed: ";
        cin>>userPassword;

        if (userPassword==correctPassword)
        {
            cout<<"Login Successful!"<<endl;
            return 0;
        }
        else
        {
            attempts--;
            cout<<"You have entered a wrong PIN."<<endl;
            cout<<"Attempts remaining: "<<attempts<<endl;
        }
    }

    cout<<"You have reached the Maximum Limit, Your Card has been Blocked."<<endl;


    return 0;
}
