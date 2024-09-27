//
// Created by Nishan Subba on 9/26/24.
//

// Given two dice with side 20, take the max number between two dice roll and find the average
// find the probability of max roll you can get

#include <iostream>
#include <random>

using namespace std;

int main() {

    // generate random number between 1 and 20, inclusive
    // initialize random seed
    // Create a random device to seed the random number generator
    std::random_device rd;

    // Use the Mersenne Twister engine (mt19937) seeded with random_device
    std::mt19937 gen(rd());

    // Define a uniform distribution to simulate a dice roll
    std::uniform_int_distribution<> distrib(1, 20);

    long long count = 0;
    long long max_sum = 0;

    // run the max for 1000 times
    while (count < 1000000000) {
        int dice_roll_one = distrib(gen);
        int dice_roll_two = distrib(gen);

        if (dice_roll_one >= dice_roll_two) {
            max_sum += dice_roll_one;
        } else {
            max_sum += dice_roll_two;
        }
        count ++;
    }

    // find avg
    double avg_max = static_cast<double>(max_sum) / count;

    // print the avg
    cout << "The avg dice roll in " << count << " times is " << avg_max << endl;

    return 0;
}