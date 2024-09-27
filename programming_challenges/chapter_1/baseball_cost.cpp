//
// Created by Nishan Subba on 9/26/24.
//

/* Baseball Cost
 * Write a program that calculates how much a Little League baseball team spend last year to purchase new baseballs. The program should prompt the user to enter the number of baseballs purchased and the cost of each baseball. It should then calculate and display the total amount spent to purchase the baseballs.
 */

#include <iostream>

using namespace std;

int main() {
 int num_of_baseball;
 double baseball_cost;

 cout << "Enter number of baseball: ";
 cin >> num_of_baseball;

 cout << "Enter the cost of each baseball: ";
 cin >> baseball_cost;

 // calculate the cost of the baseball
 double total_cost = baseball_cost * num_of_baseball;
 cout << "******************** Baseball Costs *************************" << endl;
 cout << "Total baseball cost: $" << total_cost << endl;

 return 0;
}
