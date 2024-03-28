#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    const int LIM = 100;
    int hr [LIM], rr [LIM], temp [LIM], weight[LIM], height[LIM];
    string bp [LIM], others;
    int acc;

    cout<<"Enter account number: ";
    cin>>acc;

    cout<<"Enter bp: ";
    cin>>bp[acc];
    cout<<"Enter hr: ";
    cin>>hr[acc];
    cout<<"Enter rr: ";
    cin>>rr[acc];
    cout<<"Enter temperature: ";
    cin>>temp[acc];
    cout<<"Enter weight: ";
    cin>>weight[acc];
    cout<<"Enter height: ";
    cin>>height[acc];

    cout<<endl<<bp[acc]<<endl;
    cout<<hr[acc]<<endl;
    cout<<rr[acc]<<endl;
    cout<<temp[acc]<<endl;
    cout<<weight[acc]<<endl;
    cout<<height[acc]<<endl<<endl;

    return EXIT_SUCCESS;
}
