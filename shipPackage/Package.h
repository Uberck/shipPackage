// Christos Kokkalis - Package.h header file

#ifndef PACKAGE_H
#define PACKAGE_H

// Base package class

class Package {
// Required private & public data members
private:
    std::string senderName;
    std::string senderAddress;
    std::string recipientName;
    std::string recipientAddress;
    float weight;
    float costPerOunce;
public:

// Package constructor
    Package(std::string sender_n, std::string sender_addr, std::string recipient_n, std::string recipient_addr, float wei);
    void setsenderName(std::string sender_n);
    std::string getsenderName();
    void setsenderAddress(std::string sender_addr);
    std::string getsenderAddress();
    void setrecipientName(std::string recipient_n);
    std::string getrecipientName();
    void setrecipientAddress(std::string recipient_addr);
    std::string getrecipientAddress();
    void setweight(float w);
    float getweight();
    void setcostperounce(float cost);
    float getcostperounce();
    virtual float calculateCost();
};

#endif