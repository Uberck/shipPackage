// Christos Kokkalis - Package.cpp 

#include <iostream>
#include "Package.h"

// Constructor to initialize required fields
Package::Package(std::string sender_n, std::string sender_addr, std::string recipient_name, std::string recipient_addr, float wei) {
    senderName = sender_n;
    senderAddress = sender_addr;
    recipientName = recipient_name;
    recipientAddress = recipient_addr;
    costPerOunce = 0.5;
// Input validation to ensure that weight and cost being passed contain positive values
    if (wei > 0.0) {
        weight = wei;
    }
    else {
        weight = 0.0;
    }
}

// Get & set functions for package info
void Package::setsenderName(std::string sender_n) {
    senderName = sender_n;
}
std::string Package::getsenderName() {
    return senderName;
}
void Package::setsenderAddress(std::string sender_addr) {
    senderAddress = sender_addr;
}
std::string Package::getsenderAddress() {
    return senderAddress;
}
void Package::setrecipientName(std::string recipient_name) {
    recipientName = recipient_name;
}
std::string Package::getrecipientName() {
    return recipientName;
}
void Package::setrecipientAddress(std::string recipient_addr) {
    recipientAddress = recipient_addr;
}
std::string Package::getrecipientAddress() {
    return recipientAddress;
}
void Package::setweight(float w) {
    weight = (w < 0.0) ? 0.0 : w;
}
float Package::getweight() {
    return weight;
}
void Package::setcostperounce(float cost) {
    costPerOunce = (cost < 0.0) ? 0.0 : cost;
}
float Package::getcostperounce() {
    return costPerOunce;
}

// Calculate package cost, print delivery type
float Package::calculateCost() {
    float result;
    result = weight * costPerOunce;
    std::cout << "Type of Delivery: Regular Delivery" << std::endl;
    return result;
}