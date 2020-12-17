// Christos Kokkalis - TwoDayPackage.cpp

#include <iostream>
#include "TwoDayPackage.h"


// Initializes TwoDayPackage fields as well as the FlatFee
TwoDayPackage::TwoDayPackage(std::string sender_n, std::string sender_addr, std::string recipient_n, std::string recipient_addr, float wei) : Package(sender_n, sender_addr, recipient_n, recipient_addr, wei) {
	setFlatFee(2.0);
}

// FlatFee get & set methods
float TwoDayPackage::getFlatFee() {
	return flatFee;
}
void TwoDayPackage::setFlatFee(double flat_fee) {
	this->flatFee = flat_fee;
}

// Calculate two day shipping cost, print delivery type
float TwoDayPackage::calculateCost() {
	double result;
	result = getFlatFee() * getweight() + (getweight() * getcostperounce());
	std::cout << "Type of Delivery: Two Day Delivery" << std::endl;
	return result;
}