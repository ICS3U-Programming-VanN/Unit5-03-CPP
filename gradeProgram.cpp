// Copyright (c) 2022 Van Nguyen All rights reserved.
//
// Created by: Van Nguyen
// Created on: November 25, 2022
// This program asks the user for their level
// and then displays the middle percentage mark to the user


#include <iostream>


// This function finds the middle mark percentage of a level and returns it
int calcMark(std::string level) {
    // Declared Variable
    int mark;

    // Find the middle mark value of the level
    if (level == "4++") {
        mark = 99;
    } else if (level == "4+") {
        mark = 96;
    } else if (level == "4")  {
        mark = 90;
    } else if (level == "4-") {
        mark = 84;
    } else if (level == "3+") {
        mark = 78;
    } else if (level == "3") {
        mark = 74;
    } else if (level == "3-") {
        mark = 71;
    } else if (level == "2+") {
        mark = 68;
    } else if (level == "2") {
        mark = 64;
    } else if (level == "2-") {
        mark = 61;
    } else if (level == "1+") {
        mark = 58;
    } else if (level == "1") {
        mark = 58;
    } else if (level == "1-") {
        mark = 51;
    } else {
        mark = -1;
    }

    // Returns the mark value to function call
    return mark;
}

int main() {
    // Declared Variable
    std::string userLevel;

    // Asks user for their level
    std::cout << "Enter the level you want to convert to percentage: ";
    std::cin >> userLevel;

    // Calls function to get the user's middle mark percentage
    int userMark = calcMark(userLevel);

    // IF the user entered an invalid input
    if (userMark == -1) {
        std::cout << userLevel << " is not a valid input for the level!"
        << std::endl;
    // IF the level input is valid
    } else {
        // Displays the middle mark percentage to the user
        std::cout << "Your level has a middle percentage mark of "
        << userMark << "%."<< std::endl;
    }
}
