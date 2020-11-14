// Copyright (c) 2020 Marcus A. Mosley All rights reserved.
//
// Created by Marcus A. Mosley
// Created on November 2020
// This program calculates a rounded number

#include <iostream>
#include <cmath>

void round_number(float &num, float &precision) {
    // Rounds a number to a specified precision

    num = num * pow(10, precision) + 0.5;
    num = static_cast<int>(num);
    num = num * pow(10, -precision);
}


main() {
    // This function receives input

    float number;
    float round_precision;

    // Input
    std::cout << "Enter the number you want to round: ";
    std::cin >> number;
    std::cout << "Enter how many decimal places you want to round by: ";
    std::cin >> round_precision;
    std::cout << " " << std::endl;

    // Call Functions

    round_number(number, round_precision);

    std::cout << "The rounded number is " << number << std::endl;
}
