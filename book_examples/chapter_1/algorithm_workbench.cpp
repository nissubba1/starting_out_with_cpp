//
// Created by Nishan Subba on 9/26/24.
//

// Chapter 1 Algorithm workbench

// Available credit
#include <iostream>

using namespace std;

int main() {
    double max_credit, credit_used;

    cout << "Enter the customer's maximum credit: ";
    cin >> max_credit;

    cout << "Enter the amount of credit used by the customer: ";
    cin >> credit_used;

    double available_credit = max_credit - credit_used;
    cout << "Your current credit available is " << available_credit << endl;


    return 0;
}