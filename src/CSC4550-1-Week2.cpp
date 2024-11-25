//============================================================================
// Name        : CSC4550-1-Week2.cpp
// Author      : Laure A-G Jean
// Version     :
// Copyright   : Your copyright notice
// Description :program that will take two string inputs from a user.Your program should concatenate the two strings and then print the resulting output to the screen.
//============================================================================

#include <iostream>
#include <string>

int main() {
    // Loop for taking inputs 3 times
    for (int i = 1; i <= 3; i++) {
        std::string firstString, secondString;

        // Prompt user for the first string
        std::cout << "Enter the first string (attempt " << i << "): ";
        std::getline(std::cin, firstString);

        // Prompt user for the second string
        std::cout << "Enter the second string (attempt " << i << "): ";
        std::getline(std::cin, secondString);

        // Concatenate the strings
        std::string concatenatedString = firstString + secondString;

        // Print the resulting concatenated string
        std::cout << "The concatenated string is: " << concatenatedString << std::endl;
        std::cout << "----------------------------------" << std::endl;
    }

    return 0;
}

