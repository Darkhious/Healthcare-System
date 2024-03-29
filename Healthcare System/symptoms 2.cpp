#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    const int LIM = 36;
    string symptoms [LIM] = {"Altered mental sensorium", "Abdominal cramp/pain", "Anorexia", "Bleeding gums", "Body weakness", "Blurring of vision", "Chest pain/discomfort", "Constipation", "Cough", "Diarrhea", "Dizziness", "Dysphagia", "Dyspnea", "Dysuria", "Epistaxis", "Fever", "Frequency of urination", "Headache", "Hematemesis", "Hematuria", "Hemotysis", "Irritability", "Jaundice", "Lower extremity edema", "Myalgia", "Orthopnea", "Pain(site)", "Palpitations", "Seizures", "Skin rashes", "Stool,bloody/black tarry/mucoid", "Sweating", "Urgency", "Vomiting", "Weight loss", "Others"};
    int rep;
    bool checked;

    cout<<"[1]Altered mental sensorium     [10]Diarrhea                   [19]Hematemesis              [28]Palpitations                          [37]Exit"<<endl;
    cout<<"[2]Abdominal cramp/pain         [11]Dizziness                  [20]Hematuria                [29]Seizures"<<endl;
    cout<<"[3]Anorexia                     [12]Dysphagia                  [21]Hemoptysis               [30]Skin rashes"<<endl;
    cout<<"[4]Bleeding gums                [13]Dyspnea                    [22]Irritability             [31]Stool, bloody/black tarry, mucoid"<<endl;
    cout<<"[5]Body weakness                [14]Dysuria                    [23]Jaundice                 [32]Sweating"<<endl;
    cout<<"[6]Blurring of vision           [15]Epistaxis                  [24]Lower extremity edema    [33]Urgency"<<endl;
    cout<<"[7]Chest pain/discomfort        [16]Fever                      [25]Myalgia                  [34]Vomiting"<<endl;
    cout<<"[8]Constipation                 [17]Frequency of urination     [26]Orthopnea                [35]Weight loss"<<endl;
    cout<<"[9]Cough                        [18]Headache                   [27]Pain,_________(site)     [36]Others_________"<<endl<<endl;

    cout<<"Choose symptom/s: ";
    for(rep = 0; rep <= LIM; rep++)
    {

    }

    return EXIT_SUCCESS;
}


