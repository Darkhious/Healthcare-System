#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    string meds[20]={"Amoxicillin","Co-Amoxiclav","Nitrofurantoin","Cotrimoxazole","Ciprofloxacin","Clarithromycin","Oral Rehydration Salts","Prednisone","Salbutamol","Fluticasone + Salmeterol","Paracetamol","Simvastatin","Gliclazide","Enalapril","Metoprolol","Amlodipine","Hydrochlorothiazide","Losartan","Aspirin","Chlorphenamine Maleate"};
    bool eM = true, eT = eM, checker [20]={false};
    int medCounter, choiceType, choice, iMeds, iMedicine, id;
    char ans;

    while(eT)
    {
        system("cls");
        cout<<"DRUGS AND MEDICINES"<<endl;
        cout<<"~~~~~~~~~~~~~~~~~~~"<<endl;
        cout<<"[1] Anti-Microbials"<<endl;
        cout<<"[2] Fluid and Electrolytes"<<endl;
        cout<<"[3] Anti-Asthma"<<endl;
        cout<<"[4] Anti-Pyrectics"<<endl;
        cout<<"[5] Anti-Dyslipidemia"<<endl;
        cout<<"[6] Anti-Diabetic"<<endl;
        cout<<"[7] Anti-Hypertensives"<<endl;
        cout<<"[8] Anti-Thrombotics"<<endl;
        cout<<"[9] Anti-Histamine"<<endl;
        cout<<"Choose Medicine Type: ";
        cin>>choiceType;
        system("cls");

        switch(choiceType)
        {
            case 1:
            {
                eM = true;

                while(eM)
                {
                    iMeds = 1;
                    system("cls");
                    for (medCounter = 0; medCounter <= 5; medCounter++)
                    {
                        if (checker[medCounter])
                        {
                            cout<<"[/]"<<meds[medCounter]<<endl;
                        }
                            else
                            {
                                cout<<"["<<iMeds<<"]"<<meds[medCounter]<<endl;
                            }

                        iMeds++;
                    }
                    cout<<"[7]Return"<<endl<<endl;
                    cout<<"Choose Medicine: ";
                    cin>>choice;
                    choice--;

                    if (checker[choice])
                    {
                        checker[choice] = false;

                        system("cls");
                    }
                        else if (choice >= 0 && choice < 6)
                        {
                            checker[choice] = true;
                        }
                            else if (choice == 6)
                            {
                                for (iMedicine = 0; iMedicine <=5; iMedicine++)
                                {
                                if(checker[iMedicine])
                                    {
                                        cout<<'-'<<meds[iMedicine]<<endl;
                                    }
                                }

                                cout<<"Are you sure of your chosen medicine? [Y/N]: ";
                                cin>>ans;

                                if (ans == 'Y' || ans == 'y')
                                {
                                    eM = false;
                                }
                            }
                }

                break;
            }

            case 2:
            {
                eM = true;

                while(eM)
                {
                    iMeds = 1;
                    system("cls");

                    for (medCounter = 6; medCounter <= 6; medCounter++)
                    {
                        if (checker[medCounter])
                        {
                            cout<<"[/]"<<meds[medCounter]<<endl;
                        }
                            else
                            {
                                cout<<"["<<iMeds<<"]"<<meds[medCounter]<<endl;
                            }

                        iMeds++;
                    }
                    cout<<"[2]Return"<<endl<<endl;
                    cout<<"Choose Medicine: ";
                    cin>>choice;
                    choice+=5;

                    if (checker[choice])
                    {
                        checker[choice] = false;

                        system("cls");
                    }
                        else if (choice == 6)
                        {
                            checker[choice] = true;
                        }
                            else if (choice == 7)
                            {
                                for (iMedicine = 0; iMedicine <=1; iMedicine++)
                                {
                                if(checker[iMedicine])
                                    {
                                        cout<<'-'<<meds[iMedicine]<<endl;
                                    }
                                }

                                cout<<"Are you sure of your chosen medicine? [Y/N]: ";
                                cin>>ans;

                                if (ans == 'Y' || ans == 'y')
                                {
                                    eM = false;
                                }
                            }
                }

                break;
            }

        }
    }

    return EXIT_SUCCESS;
}


