#include <iostream>

using namespace std;

int main() {
    double hours, rate;

    // get the number of hours worked
    cout << "How many hours did you work? ";

    cin >> hours;

    // get the hourly pay rate

    cout << "How much do you get paid per hour? ";
    cin >> rate;

    // calculate the pay
    double pay = hours * rate;

    // display the pay
    cout << "You have earned $" << pay << endl;

    return 0;
}