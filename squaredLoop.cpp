// Copyright (C) 2020 St. Mother Teresa HS All rights reserved
//
// created by Ryan Nguyen
// Created on December 2020
// This program ask user for an integer
//     and prints the powers of 0 to that integer


#include <iostream>
#include <string>
#include <cmath>

int main() {
    // this function calculates powers
    int integer;
    int loopCounter = 0;
    int power;

    std::string integerAsString;
    int integerAsNumber;

    // input
    std::cout << "Enter positive integer: ";
    std::cin >> integerAsString;

    // process + output
    try {
        integerAsNumber = std::stoi(integerAsString);
        if (integerAsNumber >= 0) {
            for (loopCounter = 0; loopCounter <\
            integerAsNumber + 1; loopCounter++) {
                power = pow(loopCounter, 2);
                std::cout << loopCounter << "²= " << power << std::endl;
            }
        } else {
            std::cout << "Integer must be positive";
        }
    } catch (std::invalid_argument) {
        std::cout << "That was not a valid integer";
        }
}
