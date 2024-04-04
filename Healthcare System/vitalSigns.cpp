#include <iostream>
#include <cstdlib>

using namespace std;

int i, j;

int main()
{
    const int MAX_ELEMENT = 100;
    const int VITAL_FIELDS = 6;

    string vitalSigns[VITAL_FIELDS][MAX_ELEMENT] =
    {
        {""}, // BLOOD PRESSURE - 0
        {""}, // HEART RATE - 1
        {""}, // RESPIRATORY RATE - 2
        {""}, // TEMPERATURE - 3
        {""}, // WEIGHT - 4
        {""}  // HEIGHT - 5
    };
    string description[VITAL_FIELDS] = {"Blood Pressure (##/##): ", "Heart Rate (## BPM):", "Respiratory Rate (## BPM)", "Temperature (##C): ", "Weight (Kg): ", "Height (##m): "};

    j = 0;

    for (i = 0; i < VITAL_FIELDS; i++)
    {
        cout<<"Enter "<<description[i];
        getline(cin, vitalSigns[i][j]);
    }

    return EXIT_SUCCESS;
}
