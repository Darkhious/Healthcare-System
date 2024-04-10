#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    const int MAXELEMENTS = 36;

    string labTests[13] = {"CBC w/ platelet count","Urinalysis","Fecalysis","Sputum Microscopy","Fecal Occult Blood","Pap smear","Lipid profile (Total Cholesterol, HSL and LDL Cholesterol, Triglycerides","FBS","Oral Glucose Tolerance Test","ECG","Chest X-Ray","Creatinine","HbA1c"};
    string clinic[10] = {"Chemotherapy","Family Medicine","Obstetrics","General Pediatrics","Anesthesia Pre-Operative Evaluation & Pain Management","General Surgery","General Opthalmology","Orthopedics","General ORL-HNS","General IM"};
    string input,historyIllness, chosenClinic, chosenLab, diagnosis;
    int inputNum, c, i3 = 1;
    bool eC = true, eH = eC, eL = eC, eD = eC, eS = eC;

    string painSite, otherSymptoms, symptoms[MAXELEMENTS] = {"Altered mental sensorium", "Abdominal cramp/pain", "Anorexia               ", "Bleeding gums           ", "Body weakness           ",
     "Blurring of vision      ", "Chest pain/discomfort", "Constipation           ", "Cough               ", "Diarrhea                ", "Dizziness               ", "Dysphagia               ",
      "Dyspnea               ", "Dysuria               ", "Epistaxis               ", "Fever               ", "Frequency of urination", "Headache               ", "Hematemesis              ",
       "Hematuria           ", "Hemotysis           ", "Irritability        ", "Jaundice            ", "Lower extremity edema", "Myalgia                  ", "Orthopnea           ",
        "Pain(site)          ", "Palpitations", "Seizures", "Skin rashes", "Stool,bloody/black tarry/mucoid", "Sweating", "Urgency", "Vomiting", "Weight loss", "Others"};
    bool chosen[MAXELEMENTS] = {false};
    int ctr, i, accummulator, watcher, choice, i2;
    char ans;

    while(eC)
    {
        system("cls");
        cout<<"CLINICS"<<endl;
        cout<<"~~~~~~~"<<endl;
        for(c = 0; c < 10; c++)
        {
            cout<<"["<<i3<<"]"<<clinic[c]<<endl;

            i3++;
        }
        i3 = 1;
        cout<<endl<<"Choose clinic: ";
        cin>>inputNum;

        inputNum--;
        chosenClinic = clinic[inputNum];

        cout<<"Are you sure of your choice of clinic? ("<<chosenClinic<<") [Y/N]: ";
        cin>>ans;
        cin.ignore();
        if (ans == 'Y'||ans == 'y')
        {
            eC = false;

            system("cls");
        }
    }

    while (eS)
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
                        cout<<endl<<"Are you sure you want to move on to the next process? [Y/N]: ";
                        cin>>ans
                        ;

                        system("cls");

                        if (ans == 'Y' || ans == 'y')
                        {
                            eS = false;

                            cout<<endl;
                        }
                    }
                        else
                        {
                            eS = false;

                            cout<<"Number not found.";
                        }
    }

    while(eH)
    {
        cin.ignore();
        system("cls");
        cout<<"HISTORY OF ILLNESS"<<endl;
        cout<<"~~~~~~~~~~~~~~~~~~"<<endl;
        cout<<endl<<"Enter History of Illness: ";
        getline(cin,historyIllness);

        cout<<"Are you sure of your input? ("<<historyIllness<<") [Y/N]: ";
        cin>>ans;
        if (ans == 'Y'||ans == 'y')
        {
            eH = false;
        }
    }

    while(eL)
    {
        system("cls");
        cout<<"LABORATORY TEST"<<endl;
        cout<<"~~~~~~~~~~~~~~~"<<endl;
        for(c = 0; c < 13; c++)
        {
            cout<<"["<<i3<<"]"<<labTests[c]<<endl;

            i3++;
        }
        cout<<endl<<"Choose Laboratory Tests: ";
        cin>>inputNum;

        inputNum--;
        chosenLab = labTests[inputNum];

        cout<<"Are you sure of your choice of Laboratory Test?? ("<<chosenLab<<") [Y/N]: ";
        cin>>ans;
        cin.ignore();
        if (ans == 'Y'||ans == 'y')
        {
            eL = false;
        }
    }

    while(eD)
    {
        system("cls");
        cout<<"Diagnosis"<<endl;
        cout<<"~~~~~~~~~"<<endl;
        cout<<endl<<"Enter Diagnosis: ";
        getline(cin,diagnosis);

        cout<<"Are you sure of your input? ("<<diagnosis<<") [Y/N]: ";
        cin>>ans;
        if (ans == 'Y'||ans == 'y')
        {
            eD = false;
        }
    }


    system("cls");
    cout<<"Clinic: "<<chosenClinic<<endl;
    cout<<"Entered symptoms: "<<endl;
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
    cout<<"History of Illness: "<<historyIllness<<endl;
    cout<<"Laboratory Test: "<<chosenLab<<endl;
    cout<<"Diagnosis: "<<diagnosis<<endl<<endl;

    return EXIT_SUCCESS;
}
