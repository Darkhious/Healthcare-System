#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    const int LIM = 36;
    string symptoms [LIM] = {"Altered mental sensorium", "Abdominal cramp/pain", "Anorexia", "Bleeding gums", "Body weakness", "Blurring of vision", "Chest pain/discomfort", "Constipation", "Cough", "Diarrhea", "Dizziness", "Dysphagia", "Dyspnea", "Dysuria", "Epistaxis", "Fever", "Frequency of urination", "Headache", "Hematemesis", "Hematuria", "Hemotysis", "Irritability", "Jaundice", "Lower extremity edema", "Myalgia", "Orthopnea", "Pain(site)", "Palpitations", "Seizures", "Skin rashes", "Stool,bloody/black tarry/mucoid", "Sweating", "Urgency", "Vomiting", "Weight loss", "Others"};
    bool check[LIM] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36};

    cout<<"[1]"<<symptoms[0]<<"     "<<"[10]"<<symptoms[9]<<"                   "<<"[19]"<<symptoms[18]<<"               "<<"[28]"<<symptoms[27]<<"                          "<<"[37]EXIT"<<endl;
    cout<<"[2]"<<symptoms[1]<<"         "<<"[11]"<<symptoms[10]<<"                  "<<"[20]"<<symptoms[19]<<"                 "<<"[29]"<<symptoms[28]<<endl;
    cout<<"[3]"<<symptoms[2]<<"                     "<<"[12]"<<symptoms[11]<<"                  "<<"[21]"<<symptoms[20]<<"                 "<<"[30]"<<symptoms[29]<<endl;
    cout<<"[4]"<<symptoms[3]<<"                "<<"[13]"<<symptoms[12]<<"                    "<<"[22]"<<symptoms[21]<<"              "<<"[31]"<<symptoms[30]<<endl;
    cout<<"[5]"<<symptoms[4]<<"                "<<"[14]"<<symptoms[13]<<"                    "<<"[23]"<<symptoms[22]<<"                  "<<"[32]"<<symptoms[31]<<endl;
    cout<<"[6]"<<symptoms[5]<<"           "<<"[15]"<<symptoms[14]<<"                  "<<"[24]"<<symptoms[23]<<"     "<<"[33]"<<symptoms[32]<<endl;
    cout<<"[7]"<<symptoms[6]<<"        "<<"[16]"<<symptoms[15]<<"                      "<<"[25]"<<symptoms[24]<<"                   "<<"[34]"<<symptoms[33]<<endl;
    cout<<"[8]"<<symptoms[7]<<"                 "<<"[17]"<<symptoms[16]<<"     "<<"[26]"<<symptoms[25]<<"                 "<<"[35]"<<symptoms[34]<<endl;
    cout<<"[9]"<<symptoms[8]<<"                        "<<"[18]"<<symptoms[17]<<"                   "<<"[27]"<<symptoms[26]<<"                "<<"[36]"<<symptoms[35]<<endl<<endl;

    return EXIT_SUCCESS;
}

