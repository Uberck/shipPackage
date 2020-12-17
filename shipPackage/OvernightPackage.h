// Christos Kokkalis - OvernightPackage.h header file

#ifndef OVERNIGHT_H
#define OVERNIGHT_H

#include "Package.h"

// Class OvernightPackage inherited from class Package
class OvernightPackage : public Package {

// Data members
private: float additionalCostPerOunce;
public: OvernightPackage(std::string sender_n, std::string sender_addr, std::string recipient_n, std::string recipient_addr, float wei);
	  float calculateCost();
	  float getAdditionalCostPerOunce();
	  void setAdditionalCostPerOunce(float delivery_fee);
};

#endif