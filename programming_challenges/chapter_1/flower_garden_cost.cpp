//
// Created by Nishan Subba on 9/26/24.
//

/* Flower Garden Cost
 * Write a program that calculates how much the nature center spent to make the flower garden display described in the previous problem. The program should prompt the user to enter the cost of the soil, the flower seeds, and the fence. It should then calculate and display the total amount spent.
 */

#include <iostream>
#include <cmath>

using namespace std;

// Let's make it a little challenging
// We will ask for the length and width of the garden
// Let's say you don't know how much soil you need, or flower seeds, and fence.
// You want to figure out how many bags of soil, flower seeds, and number of fences you need.
// You also want to figure out how total cost for your garden

// Function to calculate the area of the garden
double calcGardenArea(const double length, const double width) {
    return std::ceil(length * width);
}

// Function to calculate bags of soils required
int calcSoilBags(const double garden_area, const double area_per_soil_bag) {
    return static_cast<int>(std::ceil(garden_area / area_per_soil_bag));
}

// Function to calculate the number of flower bags required
int calcNumFlowerBag(const double garden_area, const double area_per_bag) {
    return static_cast<int>(std::ceil(garden_area / area_per_bag));
}

// Function to calculate the number of fences you need
int calcNumOfFences(const double garden_length, const double garden_width, const double area_per_fence) {
    return static_cast<int>(std::ceil(((2 * garden_length) + (2 * garden_width)) / area_per_fence));
}

// Function to calculate soil cost
double soilCost(const int num_of_soil_bags, const double per_bag_cost) {
    return num_of_soil_bags * per_bag_cost;
}

// Function to calculate seeds cost
double flowerSeedCost(const int num_of_seed_bags, const double seed_cost) {
    return num_of_seed_bags * seed_cost;
}

// Function to calculate fence cost
double fenceCost(const int num_of_fence, const double fence_cost) {
    return num_of_fence * fence_cost;
}

// Calculate total cost
double flowerGardenTotalCost(const double soil_cost, const double flower_seed_cost, const double fence_cost) {
    return soil_cost + flower_seed_cost + fence_cost;
}

int main() {
    double per_soil_cost, per_seed_cost, per_fence_cost, area_covered_soil, area_covered_seed, length_fence_covered,
            garden_length, garden_width;

    // Get garden length and width
    cout << "Enter your garden width (in ft): ";
    cin >> garden_width;

    cout << "Enter your garden length (in ft): ";
    cin >> garden_length;

    // get area covered by one soil and cost
    cout << "How much does each bag of soil cost: ";
    cin >> per_soil_cost;

    cout << "How much area does one bag of soil covered (in sq ft): ";
    cin >> area_covered_soil;

    // get area covered by one flower seed bag and cost
    cout << "How much does each bag of flower seed cost: ";
    cin >> per_seed_cost;

    cout << "How much area does one bag of flower seed covered (in sq ft): ";
    cin >> area_covered_seed;

    // get how long or length of one fence
    cout << "How is does one fence cost: ";
    cin >> per_fence_cost;

    cout << "What is the length of a fence (in ft): ";
    cin >> length_fence_covered;

    // Store functions returns value to variables
    const double garden_area = calcGardenArea(garden_length, garden_width); // area of the garden
    const int num_of_soil_bags = calcSoilBags(garden_area, area_covered_soil); // total number of soil bags
    const int num_of_seed_bags = calcNumFlowerBag(garden_area, area_covered_seed); // total number of flower seed bags
    const int num_of_fences = calcNumOfFences(garden_length, garden_width, length_fence_covered);
    // total number of fences

    // Get cost of soil, flower seeds, and fence
    const double total_soil_cost = soilCost(num_of_soil_bags, per_soil_cost);
    const double total_seed_cost = flowerSeedCost(num_of_seed_bags, per_seed_cost);
    const double total_fence_cost = fenceCost(num_of_fences, per_fence_cost);


    // Display the result
    cout << "********************* Flower Garden Cost ***************************" << endl;
    cout << "Area of the Garden: " << garden_area << "sq ft." << endl;
    cout << "Number of soil bags required: " << num_of_soil_bags << ". Total soil cost $" << total_soil_cost << endl;
    cout << "Number of flower seed bag required: " << num_of_seed_bags << ". Total flower seed cost $" <<
            total_seed_cost << endl;
    cout << "Number of fences required: " << num_of_fences << ". Total fence cost $" << total_fence_cost <<
            endl;
    cout << "Total Flower Garden Cost: " << flowerGardenTotalCost(total_soil_cost, total_seed_cost, total_fence_cost) <<
            endl;
    cout << "********************* End of Program ***************************" << endl;

    return 0;
}
