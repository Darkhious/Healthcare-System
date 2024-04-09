#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    const int MAXELEMENTS = 36;

    string painSite, otherSymptoms, symptoms[MAXELEMENTS] = {"Altered mental sensorium", "Abdominal cramp/pain", "Anorexia               ", "Bleeding gums           ", "Body weakness           ",
     "Blurring of vision      ", "Chest pain/discomfort", "Constipation           ", "Cough               ", "Diarrhea                ", "Dizziness               ", "Dysphagia               ",
      "Dyspnea               ", "Dysuria               ", "Epistaxis               ", "Fever               ", "Frequency of urination", "Headache               ", "Hematemesis              ",
       "Hematuria           ", "Hemotysis           ", "Irritability        ", "Jaundice            ", "Lower extremity edema", "Myalgia                  ", "Orthopnea           ",
        "Pain(site)          ", "Palpitations", "Seizures", "Skin rashes", "Stool,bloody/black tarry/mucoid", "Sweating", "Urgency", "Vomiting", "Weight loss", "Others"};
    bool chosen[MAXELEMENTS] = {false};
    int ctr, i, accummulator, watcher, choice, i2;
    bool examining;
    char symAns;

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

        cout<<"\n\nSilik ol dat aplays mah boi [1/2/3.../37 - Exit]: ";
        cin>>choice;

        choice--;

        if (choice == 26)
        {
            cout<<"Enter site of pain: ";
            cin>>painSite;
        }
            else if (choice == 35)
            {
                cout<<"Enter other symptoms: ";
                cin>>otherSymptoms;
            }

        if (chosen[choice])
        {
            chosen[choice] = false;

            system("cls");
        }
            else if (choice >= 0 && choice <= 35)
                {
                    chosen[choice] = true;

                    system("cls");
                }
                    else if (choice == 36)
                    {
                        cout<<"Are you sure you want to move on to the next process? [Y/N]: ";
                        cin>>symAns;

                        system("cls");

                        if (symAns == 'Y' || symAns == 'y')
                        {
                            cout<<endl<<"Entered symptoms: "<<endl;

                            for(i2 = 0; i2 < 36; i2++)
                            {
                                if(chosen[i2])
                                {
                                    if(i2 == 26)
                                    {
                                        cout<<"-Pain ("<<painSite<<")"<<endl;
                                    }
                                        else if (i2 == 35)
                                        {
                                            cout<<"-Others ("<<otherSymptoms<<")"<<endl;
                                        }
                                            else
                                            {
                                                cout<<'-'<<symptoms[i2]<<endl;
                                            }
                                }
                            }
                            examining = false;

                            cout<<endl;
                        }
                    }
                        else
                        {
                            examining = false;

                            cout<<"Number not found.";
                        }
    }

    return EXIT_SUCCESS;
}
