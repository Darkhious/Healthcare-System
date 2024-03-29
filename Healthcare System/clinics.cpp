#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    string clinic[10] = {"Chemotherapy","Family Medicine","Obstetrics","General Pediatrics","Anesthesia Pre-Operative Evaluation & Pain Management","General Surgery","General Opthalmology","Orthopedics","General ORL-HNS","General IM"};
    string input;
    int inputNum;

    cout<<"[1]Chemotherapy"<<endl;
    cout<<"[2]Family Medicine"<<endl;
    cout<<"[3]Obstetrics"<<endl;
    cout<<"[4]General Pediatrics"<<endl;
    cout<<"[5]Anesthesia Pre-Operative Evaluation & Pain Management"<<endl;
    cout<<"[6]General Surgery"<<endl;
    cout<<"[7]General Opthalmology"<<endl;
    cout<<"[8]Orthopedics"<<endl;
    cout<<"[9]General ORL-HNS"<<endl;
    cout<<"[10]General IM"<<endl<<endl;
    cout<<"Choose clinic: ";
    cin>>inputNum;

    inputNum--;

    cout<<"Clinic: "<<clinic[inputNum]<<endl<<endl;

    return EXIT_SUCCESS;
}
