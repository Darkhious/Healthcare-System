#include <iostream>
#include <cstdlib>

using namespace std;

void clearScreen()
{
    system("cls");
}

void waitForUser()
{
    string wait;

    cout<<"Enter anything to continue: ";
    getline(cin, wait);
}

string account()
{
    string username, password;

    cout<<"MAMU HEALTHCARE CENTER - LOGIN\n\n\n";

    cout<<"Username: ";
    cin>>username;
    cout<<"Password: ";
    cin>>password;
}

int main()
{
    clearScreen();

    return EXIT_SUCCESS;
}