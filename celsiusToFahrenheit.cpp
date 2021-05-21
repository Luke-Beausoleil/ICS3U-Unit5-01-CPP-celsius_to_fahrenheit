// Copyright (c) 2021 Luke Beausoleil All rights reserved
//
// Created by: Luke Beausoleil
// Created on: May 2021
// This program converts celsius temperatures to fahrenheit

#include <iostream>
#include <string>

void Fahrenheit() {
    // convert celsius to fahrenheit

    // variables
    std::string celsiusAsString;
    float celsius;
    float fahrenheit;

    // input
    std::cout << "Enter a temperature in °C: ";
    std::cin >> celsiusAsString;

    // process & output
    try {
        celsius = std::stof(celsiusAsString);
        fahrenheit = (((1.8) * celsius) + 32);
        std::cout << celsius << "°C is equal to " << fahrenheit << "°F"
              << std::endl;
    } catch (std::invalid_argument) {
        std::cout << celsiusAsString << " is not a valid celsius temperature"
              << std::endl;
    }
    std::cout << "Done." << std::endl;
}

int main() {
    // this function calls other functions

    // call function
    Fahrenheit();
}
