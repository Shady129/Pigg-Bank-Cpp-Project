#include <iostream>
#include <string>

using namespace std;

struct stPiggBank
{
    int Pennies, Nickels, Dimes, Quarters, Dollars;
};

stPiggBank ReadPiggBankContent()
{

    stPiggBank PiggBankContent;

    cout << "Please Enter The Total Pennies: ";
    cin >> PiggBankContent.Pennies;


    cout << "Please Enter The Total Nickels: ";
    cin >> PiggBankContent.Nickels;


    cout << "Please Enter The Total Dimes: ";
    cin >> PiggBankContent.Dimes;


    cout << "Please Enter The Total Quarter: ";
    cin >> PiggBankContent.Quarters;


    cout << "Please Enter The Total Dollar: ";
    cin >> PiggBankContent.Dollars;


    return PiggBankContent;
}


float CalculateTotalPennies(stPiggBank PiggBankContent)
{

    float TotalPennies = PiggBankContent.Pennies * 1 + PiggBankContent.Nickels * 5 + PiggBankContent.Dimes * 10
    + PiggBankContent.Quarters * 25 + PiggBankContent.Dollars * 100;    
}




int main()
{

    float TotalPennies = CalculateTotalPennies(ReadPiggBankContent());

    cout << "Total Pennies =  " << TotalPennies << endl;
    cout << "Total Dollar  =  " << TotalPennies / 100;

    return 0;
}
