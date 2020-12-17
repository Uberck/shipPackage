// Christos Kokkalis - main.cpp driver program

#include <iostream>
#include <iomanip>
#include "TwoDayPackage.h"
#include "OvernightPackage.h"

// Creates objects of each type of Package and tests member funtions
int main() {
    const int SIZE = 4;
    // Set max output size to two decimal places
    std::cout << std::fixed << std::setprecision(2);
    OvernightPackage package1("Christos", "Washington St., Boston", "George", "Foster St., Boston", 8);
    TwoDayPackage package2("Sheela", "Portland, Maine", "Robby", "Dublin, Ireland", 14);
    Package package3("Paul", "Los Angeles, California", "Michelle", "West Springfield, Mass", 6);
    TwoDayPackage package4("Mike", "Baldwin St., Boston", "Jeff", "Highway Road, New York", 9);
    Package* packages[4] = {
      &
      package1,
      &
      package2,
      &
      package3,
      &
      package4
    };
    // Print defined results using required get & calculate methods
    std::cout << "***** PackageCost calculates the cost of shipping based on the delivery method entered *****" << std::endl;
    std::cout << "***** Package delivery information after testing ship methods *****" << std::endl;
    for (int i = 0; i < SIZE; i++) {
        std::cout << "\nPackage " << (i + 1) << " info :::" << std::endl;
        std::cout << "Sender:" << std::endl;
        std::cout << packages[i]->getsenderName() << "\n";
        std::cout << packages[i]->getsenderAddress() << "\n";
        std::cout << "\n";
        std::cout << "Recipient:" << std::endl;
        std::cout << packages[i]->getrecipientName() << "\n";
        std::cout << packages[i]->getsenderAddress() << "\n";
        std::cout << "\nWeight of Package: " << packages[i]->getweight() << " lbs" << std::endl;
        std::cout << "\n";
        std::cout << "Cost of Delivery: $" << packages[i]->calculateCost() << std::endl;
        std::cout << "=======================================" << std::endl;
    }
    return 0;
}