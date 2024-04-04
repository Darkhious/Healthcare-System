#include <iostream>
#include <cstdlib>
#include <fstream>

using namespace std;

bool isDigit(string text)
{
    char symbol;
    int i;
    bool found;

    found = false;

    for (i = 0; i < text.length(); i++)
    {
        symbol = text[i];

        if (!(symbol >= '0' && symbol <= '9'))
        {
            found = true;
        }
    }

    if (found)
    {
        return false;
    }
        else
        {
            return true;
        }
}

string upperAlpha (string text)
{
    int i;

    for (i = 0; i < text.length(); i++)
    {
        text[i] = toupper(text[i]);
    }

    return text;
}

int main()
{
    string patientBio[5] = {""};
    string userName, userPass;
    int accountID;

    cout << "SIGN UP\n\n";

    cout << "Last Name: ";
    getline(cin, patientBio[0]);
    cout << "First Name: ";
    getline(cin, patientBio[1]);
    cout << "Middle Name: ";
    getline(cin, patientBio[2]);

    do
    {
        cout << "Age: ";
        getline(cin, patientBio[3]);
    } while (!isDigit(patientBio[3]));

    do
    {
        cout << "Sex (Male/Female): ";
        getline(cin, patientBio[4]);

        patientBio[4] = upperAlpha(patientBio[4]);
    } while (patientBio[4] != "MALE" && patientBio[4] != "FEMALE");

    cout << "Username: ";
    getline(cin, userName);
    cout << "Password: ";
    getline(cin, userPass);

    patientBio[0] = upperAlpha(patientBio[0]);
    patientBio[1] = upperAlpha(patientBio[1]);
    patientBio[2] = upperAlpha(patientBio[2]);

    return EXIT_SUCCESS;
}
