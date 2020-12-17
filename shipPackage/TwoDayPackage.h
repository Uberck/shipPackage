// Christos Kokkalis - TwoDayPackage.h header file

#ifndef TWODAYDELIVERY_H
#define TWODAYDELIVERY_H

#include "Package.h"

// Class TwoDayPackage derived from base class Package
class TwoDayPackage : public Package {
private: float flatFee;

// TwoDayPackage member functions
public: TwoDayPackage(std::string sender_n, std::string sender_addr, std::string recipient_n, std::string recipient_addr, float wei);
	  float getFlatFee();
	  void setFlatFee(double flatFee);
	  float calculateCost();
};

#endif