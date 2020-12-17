// Christos Kokkalis - OvernightPackage.cpp

#include <iostream>
#include "OverNightPackage.h"

// OvernightPackage constructor
OvernightPackage::OvernightPackage(std::string sender_n, std::string sender_addr, std::string recipient_n,
	std::string recipient_addr, float wei) : Package(sender_n, sender_addr, recipient_n, recipient_addr, wei) {
	setAdditionalCostPerOunce(5.0);
}
// Calculate additional cost per ounce
float OvernightPackage::getAdditionalCostPerOunce() {
	return additionalCostPerOunce;
}
// Get & set
void OvernightPackage::setAdditionalCostPerOunce(float delivery_fee) {
	additionalCostPerOunce = delivery_fee;
}
// Calculate package cost, print delivery type
float OvernightPackage::calculateCost() {
	float result;
	result = getAdditionalCostPerOunce() * getweight() + (getweight() * getcostperounce());
	std::cout << "Type of Delivery: Overnight Delivery" << std::endl;
	return result;
}