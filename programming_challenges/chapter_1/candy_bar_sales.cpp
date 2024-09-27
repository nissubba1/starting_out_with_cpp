//
// Created by Nishan Subba on 9/26/24.
//

/* Candy Bar Sales
 * Write a program that calculates how much a student organization earns during its fund-raising candy sale. The
 * program should prompt the user to enter the number of candy bars sold and the amount the organization earns for each bar sold. It should then calculate and display the total amount earned.
 */

#include <iostream>

using namespace std;

int main() {
    // variables
    // number of candy bar
    // amounts earned per bar

    int num_candy_bar;
    double commission;

    cout << "Enter number of candy bars: ";
    cin >> num_candy_bar;

    cout << "Enter the amount earned per candy bar: ";
    cin >> commission;

    // calculate the total earning
    double total_profit = num_candy_bar * commission;

    cout << "*************** Total Profit ****************" << endl;
    cout << "Total profit is: $" << total_profit << endl;

    return 0;
}
