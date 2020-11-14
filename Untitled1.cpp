// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Mr. Coxall
// Created on: Oct 2019
// This program uses a function by reference

#include <iostream>


void AddOne(int &someVariable) {
    // function adds 1, by reference

    someVariable = someVariable + 1;
}

main() {
    // this function gets a number and calls the AddOne function

    int someNumber;

    // input
    std::cout << "Enter a number: ";
    std::cin >> someNumber;

    AddOne(someNumber);

    std::cout << "New number: " << someNumber;

}