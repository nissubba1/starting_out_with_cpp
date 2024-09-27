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

    cout << "Hi! It\'s me.\n";
    cout << "I\'m learning to program!\n";
    /* Hi! It's me
     *
     *I'm learning to program!
     *
     */

    return 0;
}