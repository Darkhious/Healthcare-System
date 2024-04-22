#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    string meds[9][7]={{"Amoxicillin","Co-Amoxiclav","Nitrofurantoin","Cotrimoxazole","Ciprofloxacin","Clarithromycin"}, //Anti-Microbials
                    {"Oral Rehydration Salts"}, //Fluid and Electrolytes
                    {"Prednisone","Salbutamol","Fluticasone + Salmeterol"}, //Anti-Asthma
                    {"Paracetamol"}, //Anti-Pyretics
                    {"Simvastatin"}, //Anti-Dyslipidemia
                    {"Gliclazide", "Metformin"}, //Anti-Diabetic
                    {"Enalapril","Metoprolol","Amlodipine","Hydrochlorothiazide","Losartan"}, //Anti-Hypertensives
                    {"Aspirin"}, //Anti-Thrombotics
                    {"Chlorphenamine Maleate"}}; //Anti-Histamine
    bool eM = true, eT = eM, checker [9][7]={false};
    int medCounter, choiceType, choice, iMeds, iMedicine, allMedsX = 6, allMedsY = 9, column, width;
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
        cout<<"[10]Submit"<<endl<<endl;
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
                    cout<<"ANTI-MICROBIALS"<<endl;
                    cout<<"~~~~~~~~~~~~~~~"<<endl;
                    for (medCounter = 0; medCounter <= 5; medCounter++)
                    {
                        if (checker[0][medCounter])
                        {
                            cout<<"[/]"<<meds[0][medCounter]<<endl;
                        }
                            else
                            {
                                cout<<"["<<iMeds<<"]"<<meds[0][medCounter]<<endl;
                            }

                        iMeds++;
                    }
                    cout<<"[7]Return"<<endl<<endl;
                    cout<<"Choose Medicine: ";
                    cin>>choice;
                    choice--;

                    if (choice == 6)
                            {
                                for (iMedicine = 0; iMedicine <=5; iMedicine++)
                                {
                                if(checker[0][iMedicine])
                                    {
                                        cout<<'-'<<meds[0][iMedicine]<<endl;
                                    }
                                }

                                cout<<endl<<"Are you sure of your chosen medicine? [Y/N]: ";
                                cin>>ans;

                                if (ans == 'Y' || ans == 'y')
                                {
                                    eM = false;
                                }
                            }

                    if (checker[0][choice])
                    {
                        checker[0][choice] = false;

                        system("cls");
                    }
                        else if (choice >= 0 && choice < 6)
                        {
                            checker[0][choice] = true;
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
                    cout<<"FLUID AND ELECTROLYTES"<<endl;
                    cout<<"~~~~~~~~~~~~~~~~~~~~~~"<<endl;
                    for (medCounter = 0; medCounter < 1; medCounter++)
                    {
                        if (checker[1][medCounter])
                        {
                            cout<<"[/]"<<meds[1][medCounter]<<endl;
                        }
                            else
                            {
                                cout<<"["<<iMeds<<"]"<<meds[1][medCounter]<<endl;
                            }

                        iMeds++;
                    }
                    cout<<"[2]Return"<<endl<<endl;
                    cout<<"Choose Medicine: ";
                    cin>>choice;
                    choice--;

                    if (choice == 1)
                    {
                        for (iMedicine = 0; iMedicine <=1; iMedicine++)
                        {
                            if(checker[1][iMedicine])
                                {
                                cout<<'-'<<meds[1][iMedicine]<<endl;
                                }
                        }
                        cout<<endl<<"Are you sure of your chosen medicine? [Y/N]: ";
                        cin>>ans;

                        if (ans == 'Y' || ans == 'y')
                        {
                            eM = false;
                        }
                    }
                    if (checker[1][choice])
                    {
                        checker[1][choice] = false;

                        system("cls");
                    }
                        else if (choice >= 0 && choice < 1)
                        {
                            checker[1][choice] = true;
                        }
                }
                break;
            }
            case 3:
            {
                eM = true;

                while(eM)
                {
                    iMeds = 1;
                    system("cls");
                    cout<<"ANTI-ASTHMA"<<endl;
                    cout<<"~~~~~~~~~~~"<<endl;
                    for (medCounter = 0; medCounter <= 2; medCounter++)
                    {
                        if (checker[2][medCounter])
                        {
                            cout<<"[/]"<<meds[2][medCounter]<<endl;
                        }
                            else
                            {
                                cout<<"["<<iMeds<<"]"<<meds[2][medCounter]<<endl;
                            }

                        iMeds++;
                    }
                    cout<<"[4]Return"<<endl<<endl;
                    cout<<"Choose Medicine: ";
                    cin>>choice;
                    choice--;

                    if (choice == 3)
                    {
                        for (iMedicine = 0; iMedicine <=2; iMedicine++)
                        {
                            if(checker[2][iMedicine])
                            {
                                cout<<'-'<<meds[2][iMedicine]<<endl;
                            }
                        }

                        cout<<endl<<"Are you sure of your chosen medicine? [Y/N]: ";
                        cin>>ans;

                        if (ans == 'Y' || ans == 'y')
                        {
                            eM = false;
                        }
                    }

                    if (checker[2][choice])
                    {
                        checker[2][choice] = false;

                        system("cls");
                    }
                        else if (choice >= 0 && choice < 4)
                        {
                            checker[2][choice] = true;
                        }
                }
                break;
            }
            case 4:
            {
                eM = true;

                while(eM)
                {
                    iMeds = 1;
                    system("cls");
                    cout<<"ANTI-PYRECTICS"<<endl;
                    cout<<"~~~~~~~~~~~~~~"<<endl;
                    for (medCounter = 0; medCounter < 1; medCounter++)
                    {
                        if (checker[3][medCounter])
                        {
                            cout<<"[/]"<<meds[3][medCounter]<<endl;
                        }
                            else
                            {
                                cout<<"["<<iMeds<<"]"<<meds[3][medCounter]<<endl;
                            }

                        iMeds++;
                    }
                    cout<<"[2]Return"<<endl<<endl;
                    cout<<"Choose Medicine: ";
                    cin>>choice;
                    choice--;

                    if (choice == 1)
                    {
                        for (iMedicine = 0; iMedicine <=1; iMedicine++)
                        {
                            if(checker[3][iMedicine])
                            {
                                cout<<'-'<<meds[3][iMedicine]<<endl;
                            }
                        }
                        cout<<endl<<"Are you sure of your chosen medicine? [Y/N]: ";
                        cin>>ans;

                        if (ans == 'Y' || ans == 'y')
                        {
                            eM = false;
                        }
                    }
                    if (checker[3][choice])
                    {
                        checker[3][choice] = false;

                        system("cls");
                    }
                        else if (choice >= 0 && choice < 1)
                        {
                            checker[3][choice] = true;
                        }
                }
                break;
            }
            case 5:
            {
                eM = true;

                while(eM)
                {
                    iMeds = 1;
                    system("cls");
                    cout<<"ANTI-DYSLIPIDEMIA"<<endl;
                    cout<<"~~~~~~~~~~~~~~~~~"<<endl;
                    for (medCounter = 0; medCounter < 1; medCounter++)
                    {
                        if (checker[4][medCounter])
                        {
                            cout<<"[/]"<<meds[4][medCounter]<<endl;
                        }
                            else
                            {
                                cout<<"["<<iMeds<<"]"<<meds[4][medCounter]<<endl;
                            }

                        iMeds++;
                    }
                    cout<<"[2]Return"<<endl<<endl;
                    cout<<"Choose Medicine: ";
                    cin>>choice;
                    choice--;

                    if (choice == 1)
                    {
                        for (iMedicine = 0; iMedicine <=1; iMedicine++)
                        {
                            if(checker[4][iMedicine])
                            {
                                cout<<'-'<<meds[4][iMedicine]<<endl;
                            }
                        }
                        cout<<endl<<"Are you sure of your chosen medicine? [Y/N]: ";
                        cin>>ans;

                        if (ans == 'Y' || ans == 'y')
                        {
                            eM = false;
                        }
                    }
                    if (checker[4][choice])
                    {
                        checker[4][choice] = false;

                        system("cls");
                    }
                        else if (choice >= 0 && choice < 1)
                        {
                            checker[4][choice] = true;
                        }
                }
                break;
            }
            case 6:
            {
                eM = true;

                while(eM)
                {
                    iMeds = 1;
                    system("cls");
                    cout<<"ANTI-DIABETIC"<<endl;
                    cout<<"~~~~~~~~~~~~~"<<endl;
                    for (medCounter = 0; medCounter < 2; medCounter++)
                    {
                        if (checker[5][medCounter])
                        {
                            cout<<"[/]"<<meds[5][medCounter]<<endl;
                        }
                            else
                            {
                                cout<<"["<<iMeds<<"]"<<meds[5][medCounter]<<endl;
                            }

                        iMeds++;
                    }
                    cout<<"[3]Return"<<endl<<endl;
                    cout<<"Choose Medicine: ";
                    cin>>choice;
                    choice--;

                    if (choice == 2)
                    {
                        for (iMedicine = 0; iMedicine <= 2; iMedicine++)
                        {
                            if(checker[5][iMedicine])
                                {
                                cout<<'-'<<meds[5][iMedicine]<<endl;
                                }
                        }
                        cout<<endl<<"Are you sure of your chosen medicine? [Y/N]: ";
                        cin>>ans;

                        if (ans == 'Y' || ans == 'y')
                        {
                            eM = false;
                        }
                    }
                    if (checker[5][choice])
                    {
                        checker[5][choice] = false;

                        system("cls");
                    }
                        else if (choice >= 0 && choice < 2)
                        {
                            checker[5][choice] = true;
                        }
                }
                break;
            }
            case 7:
            {
                eM = true;

                while(eM)
                {
                    iMeds = 1;
                    system("cls");
                    cout<<"ANTI-HYPERTENSIVES"<<endl;
                    cout<<"~~~~~~~~~~~~~~~~~~"<<endl;
                    for (medCounter = 0; medCounter < 5; medCounter++)
                    {
                        if (checker[6][medCounter])
                        {
                            cout<<"[/]"<<meds[6][medCounter]<<endl;
                        }
                            else
                            {
                                cout<<"["<<iMeds<<"]"<<meds[6][medCounter]<<endl;
                            }

                        iMeds++;
                    }
                    cout<<"[6]Return"<<endl<<endl;
                    cout<<"Choose Medicine: ";
                    cin>>choice;
                    choice--;

                    if (choice == 5)
                    {
                        for (iMedicine = 0; iMedicine <= 5; iMedicine++)
                        {
                            if(checker[6][iMedicine])
                                {
                                cout<<'-'<<meds[6][iMedicine]<<endl;
                                }
                        }
                        cout<<endl<<"Are you sure of your chosen medicine? [Y/N]: ";
                        cin>>ans;

                        if (ans == 'Y' || ans == 'y')
                        {
                            eM = false;
                        }
                    }
                    if (checker[6][choice])
                    {
                        checker[6][choice] = false;

                        system("cls");
                    }
                        else if (choice >= 0 && choice < 5)
                        {
                            checker[6][choice] = true;
                        }
                }
                break;
            }
            case 8:
            {
                eM = true;

                while(eM)
                {
                    iMeds = 1;
                    system("cls");
                    cout<<"ANTI-THROMBOTICS"<<endl;
                    cout<<"~~~~~~~~~~~~~~~~"<<endl;
                    for (medCounter = 0; medCounter < 1; medCounter++)
                    {
                        if (checker[7][medCounter])
                        {
                            cout<<"[/]"<<meds[7][medCounter]<<endl;
                        }
                            else
                            {
                                cout<<"["<<iMeds<<"]"<<meds[7][medCounter]<<endl;
                            }

                        iMeds++;
                    }
                    cout<<"[2]Return"<<endl<<endl;
                    cout<<"Choose Medicine: ";
                    cin>>choice;
                    choice--;

                    if (choice == 1)
                    {
                        for (iMedicine = 0; iMedicine <=1; iMedicine++)
                        {
                            if(checker[7][iMedicine])
                                {
                                cout<<'-'<<meds[7][iMedicine]<<endl;
                                }
                        }
                        cout<<endl<<"Are you sure of your chosen medicine? [Y/N]: ";
                        cin>>ans;

                        if (ans == 'Y' || ans == 'y')
                        {
                            eM = false;
                        }
                    }
                    if (checker[7][choice])
                    {
                        checker[7][choice] = false;

                        system("cls");
                    }
                        else if (choice >= 0 && choice < 1)
                        {
                            checker[7][choice] = true;
                        }
                }
                break;
            }
            case 9:
            {
                eM = true;

                while(eM)
                {
                    iMeds = 1;
                    system("cls");
                    cout<<"ANTI-HISTAMINE"<<endl;
                    cout<<"~~~~~~~~~~~~~~"<<endl;
                    for (medCounter = 0; medCounter < 1; medCounter++)
                    {
                        if (checker[8][medCounter])
                        {
                            cout<<"[/]"<<meds[8][medCounter]<<endl;
                        }
                            else
                            {
                                cout<<"["<<iMeds<<"]"<<meds[8][medCounter]<<endl;
                            }

                        iMeds++;
                    }
                    cout<<"[2]Return"<<endl<<endl;
                    cout<<"Choose Medicine: ";
                    cin>>choice;
                    choice--;

                    if (choice == 1)
                    {
                        for (iMedicine = 0; iMedicine <=1; iMedicine++)
                        {
                            if(checker[8][iMedicine])
                                {
                                cout<<'-'<<meds[8][iMedicine]<<endl;
                                }
                        }
                        cout<<endl<<"Are you sure of your chosen medicine? [Y/N]: ";
                        cin>>ans;

                        if (ans == 'Y' || ans == 'y')
                        {
                            eM = false;
                        }
                    }
                    if (checker[8][choice])
                    {
                        checker[8][choice] = false;

                        system("cls");
                    }
                        else if (choice >= 0 && choice < 1)
                        {
                            checker[8][choice] = true;
                        }
                }
                break;
            }
            case 10:
            {
                cout<<"Chosen Medicine: "<<endl;
                for(column = 0; column < allMedsY; column++)
                {
                    for(width = 0; width < allMedsX; width++)
                    {
                        if(checker[column][width])
                        {
                            cout<<'-'<<meds[column][width]<<endl;
                        }
                    }
                }

                cout<<endl<<"Are you sure of your chosen medicine? [Y/N]: ";
                cin>>ans;

                if (ans == 'Y' || ans == 'y')
                {
                    eT = false;
                }

                break;
            }
        }
    }

    return EXIT_SUCCESS;
}
