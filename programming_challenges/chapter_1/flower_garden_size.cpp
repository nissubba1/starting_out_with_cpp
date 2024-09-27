//
// Created by Nishan Subba on 9/26/24.
//

/* Flower Garden Size
 * Write a program that calculates the size of a rectangular flower garden in a nature center. The program should prompt the user to enter the length and width of the garden in feet. It should then calculate and display the number of square feet in the garden.
 */

#include <iostream>

using namespace std;

int main() {
    double garden_width, garden_length;

    cout << "Enter length of the garden (in feet): ";
    cin >> garden_length;

    cout << "Enter width of the garden (in feet): ";
    cin >> garden_width;

    // calculate the cost of the baseball
    double area_of_garden = garden_length * garden_width;
    cout << "******************** Flower Garden Size *************************" << endl;
    cout << "The area of the garden is: " << area_of_garden << " sq ft." << endl;

    return 0;
}
