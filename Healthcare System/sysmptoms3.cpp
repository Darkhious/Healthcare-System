#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    const int MAXELEMENTS = 36;

    string symptoms[MAXELEMENTS] = {"Altered mental sensorium", "Abdominal cramp/pain", "Anorexia               ", "Bleeding gums           ", "Body weakness           ",
     "Blurring of vision      ", "Chest pain/discomfort", "Constipation           ", "Cough               ", "Diarrhea                ", "Dizziness               ", "Dysphagia               ",
      "Dyspnea               ", "Dysuria               ", "Epistaxis               ", "Fever               ", "Frequency of urination", "Headache               ", "Hematemesis              ",
       "Hematuria           ", "Hemotysis           ", "Irritability        ", "Jaundice            ", "Lower extremity edema", "Myalgia                  ", "Orthopnea           ",
        "Pain(site)          ", "Palpitations", "Seizures", "Skin rashes", "Stool,bloody/black tarry/mucoid", "Sweating", "Urgency", "Vomiting", "Weight loss", "Others"};
    bool chosen[MAXELEMENTS] = {false};
    int ctr, i, accummulator, watcher, choice;
    bool examining;

    examining = true;

    while (examining)
    {
        ctr = 1;
        accummulator = 1;
        watcher = 29;
        i = 0;

        while (true)
        {
            if(chosen[i])
            {
                cout<<"[/] "<<symptoms[i]<<"\t\t\t";
            }
                else
                {
                    cout<<"["<<ctr<<"] "<<symptoms[i]<<"\t\t\t";
                }

            ctr += 9;
            i += 9;

            if (ctr >= watcher)
            {
                cout<<endl;

                ctr = 1;
                i = 0;
                ctr += accummulator;
                i += accummulator;
                accummulator++;
                watcher++;
            }

            if (watcher == 38)
            {
                break;
            }
        }

        cout<<"\n\nSilik ol dat aplays mah boi [1/2/3...]: ";
        cin>>choice;

        choice--;

        if (choice >= 0 && chosen[choice])
        {
            chosen[choice] = false;
        }
            else if (choice >= 0)
            {
                chosen[choice] = true;
            }
                else
                {
                    examining = false;
                }
    }

    return EXIT_SUCCESS;
}
