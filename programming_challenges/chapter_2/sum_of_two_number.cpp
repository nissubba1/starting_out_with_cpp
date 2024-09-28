//
// Created by Nishan Subba on 9/28/24.
//

/*Write a program that stores the integers 50 and 100 in variables and stores the sum of these two in a variable named total. Display the total on the screen.
*/

#include <iostream>

using namespace std;

int main() {

    int num1 = 50,
        num2 = 100,
        total = num1 + num2;
    cout << "************************ Sum of Two Number ********************************" << endl;
    cout << "The sum of " << num1 << " and " << num2 << " is " << total << endl;

    return 0;
}