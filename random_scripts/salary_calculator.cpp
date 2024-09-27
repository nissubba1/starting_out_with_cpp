//
// Created by Nishan Subba on 9/27/24.
//

#include <iostream>

using namespace std;

int main() {

    // declare variables
    double hourly_rate;
    int num_of_hours, total_weeks;

    cout << "Enter hourly rate: ";
    cin >> hourly_rate;

    cout << "Enter number of hours you want to work per week: ";
    cin >> num_of_hours;

    cout << "Enter total weeks (or 52 since there are 52 weeks in year): ";
    cin >> total_weeks;

    double salary = hourly_rate * num_of_hours * total_weeks;

    cout << "**************** Salary ********************" << endl;
    cout << "Your expected salary is: " << salary << endl;
    cout << "*************** End of Program *******************" << endl;


    return 0;
}