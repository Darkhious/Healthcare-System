#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    const int MAXELEMENTS = 36;

    string symptoms[MAXELEMENTS] = {"Altered mental sensorium", "Abdominal cramp/pain", "Anorexia", "Bleeding gums", "Body weakness", "Blurring of vision", "Chest pain/discomfort", "Constipation", "Cough", "Diarrhea", "Dizziness", "Dysphagia", "Dyspnea", "Dysuria", "Epistaxis", "Fever", "Frequency of urination", "Headache", "Hematemesis", "Hematuria", "Hemotysis", "Irritability", "Jaundice", "Lower extremity edema", "Myalgia", "Orthopnea", "Pain(site)", "Palpitations", "Seizures", "Skin rashes", "Stool,bloody/black tarry/mucoid", "Sweating", "Urgency", "Vomiting", "Weight loss", "Others"};
    bool chosen[MAXELEMENTS] = {false};
    int ctr, i, accummulator;
    bool examining;

    ctr = 1;
    accummulator = 1;
    i = 0;
    examining = true;

    while (examining)
    {
        if(chosen[i])
        {
            cout<<"[/] "<<symptoms[i]<<"    ";
        }
            else
            {
                cout<<"["<<ctr<<"] "<<symptoms[i]<<"    ";
            }

        ctr += 9;
        i++;

        if (ctr == 36)
        {
            break;
        }

        if (ctr >= 28 && ctr <= 36)
        {
            cout<<endl;

            ctr = 1;
            ctr += accummulator;
            accummulator++;
        }
    }

    return EXIT_SUCCESS;
}
