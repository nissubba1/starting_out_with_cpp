//
// Created by Nishan Subba on 9/28/24.
//

/* The East Coast sales division of a company generates 58 percent of total sales. Based on that percentage, write a program that will predict how much the East Coast division will generate if the company has $8.6 million in sales this year. Display the result on the screen.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int sales = 8600000;
    double percentage = static_cast<double>(58) / 100;

    double expectedSales = sales * percentage;

    cout << "*********************** Sales Prediction ********************************* " << endl;
    cout << fixed << setprecision(2);
    cout << "The company can expected the total sales to be $" << expectedSales << endl;

    return 0;
}