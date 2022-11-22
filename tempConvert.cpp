// Copyright Carolyn
// Created by: Carolyn Webster Pless
// Created on: 22/11/22
// Converts the user input for a temperature
// In celsius into fahrenheit. Uses a specific
// function which is defined and called.

#include <iostream>
#include <string>

void ConvertCelsiusToFahrenheit() {
    // Variables for the celsius user input and fahrenheit
    std::string celsius;
    float celsiusFloat;
    float fahrenheit;

    // Title
    std::cout << "Celsius To Fahrenheit\n";

    // User input for temperature in celsius
    std::cout << "Please enter a temperature (decimal) in Celsius: ";
    std::cin >> celsius;

    // Try Catch statement to make sure the answer is not a string
    try {
        float celsiusFloat = stof(celsius);

        // Calculating the temperature in fahrenheit
        // Changed 9/5 to 1.8 because it wasn't working otherwise
        float fahrenheit = (1.8) * celsiusFloat + 32;

        // Displaying the temperature back to user
        std::cout << "The temperature in fahrenheit is " << fahrenheit << "!\n";
    } catch (std::invalid_argument) {
        std::cout << "Please enter a number!\n";
    }
}


int main() {
    ConvertCelsiusToFahrenheit();
}
