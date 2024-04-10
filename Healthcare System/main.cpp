#include <iostream>
#include <cstdlib>

using namespace std;

const string COMPANY_NAME = "CONSULTATION SYSTEM\n";

string userInput; // Holds the user input for the whole program
int i; // Will be used by generic loops
bool found, examining; // Will be used to determine whether something is found or not, and when examining or not.

void clear()
{
    system("cls"); // This will clear the terminal's display
}

bool checkInput(string toCheck)
{
    char symbol;

    found = false;
    for(i = 0; i < toCheck.length(); i++)
    {
        symbol = toCheck[i]; // Transfers each letter of the text

        // Checks if the symbol is within the range
        if (symbol >= '0' && symbol <= '9')
            continue;
            else
                found = true;
    }

    if (found)
        return false;
        else
            return true;
}

void showClinic()
{
    const int CLINIC_NUMBER = 10; // We avoid magic numbers

    // This is an array to display all the clinics
    string clinics[CLINIC_NUMBER] =
    {"Chemotherapy", "Family Medicine", "Obstetrics", "General Pediatrics", "Anesthesia Pre-Operative Evaluation & Pain Management", "General Surgery", "General Opthalmology", "Orthopedics", "General ORL-HNS", "General IM"};
    int ctr;

    examining = true;
    do
    {
        clear();
        cout<<COMPANY_NAME;
        cout<<"PHASE 1 - CLINICS ---\n\n";

        ctr = 1;
        for(i = 0; i < CLINIC_NUMBER; i++)
        {
            cout<<ctr<<".) "<<clinics[i]<<endl;

            ctr++;
        }

        cout<<"\nSelect a clinic (1/2/3/...): ";
        getline(cin, userInput);

        if (!userInput.empty())
            examining = !checkInput(userInput);
    }while (examining);
}

int main()
{
    showClinic();

    return EXIT_SUCCESS;
}
