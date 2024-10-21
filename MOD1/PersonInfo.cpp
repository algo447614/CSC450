//============================================================================
// Name        : PersonInfo.cpp
// Author      : AG
// Version     :
// Copyright   : 
// Description : Created a simple C++ console application using Eclipse IDE that will accomplish the following:

//    First Name,
//    Last Name,
//    Street Address
//    City
//    Zip code

//============================================================================

#include <iostream>
#include <string>

int main() {
    // Fictional person's information
    std::string firstName = "Jaredd";
    std::string lastName = "Gofff";
    std::string streetAddress = "222 Republic Drive";
    std::string city = "Allen Park";
    std::string zipCode = "48101";

    // Print 
    std::cout << "First Name: " << firstName << std::endl;
    std::cout << "Last Name: " << lastName << std::endl;
    std::cout << "Street Address: " << streetAddress << std::endl;
    std::cout << "City: " << city << std::endl;
    std::cout << "Zip Code: " << zipCode << std::endl;

    return 0;
}

