// Copyright (c) 2023 Julien Lamoureux All rights reserved.

// Created By: Julien Lamoureux
// Date: December 13, 2023
// # This program display the average of 10 marks

#include <iostream>
#include <cstdlib>
#include <random>

int main() {
    // declare variables
    int randNum, sum, counter;
    // declare constants
    const int MAX = 100;
    const int MIN = 0;
    const int ARRAY_SIZE = 10;

    // declare marksArray
    int marksArray[ARRAY_SIZE];

    // initialize sum to 0
    sum = 0;

    // tell the user what the program does
    std::cout << "This program display the average of the following marks :"
    << std::endl;

    // use a for loop when counter < ARRAY_SIZE
    for (counter = 0; counter < ARRAY_SIZE; counter++) {
        // initialize seed
        std::random_device rseed;

        std::mt19937 rgen(rseed());  // mersenne_twister

        std::uniform_int_distribution<int> idist(MIN, MAX);  // [0,100]

        // generate a random number between 0 and 9
        randNum = idist(rgen);

        // append marksArray to the random number
        marksArray[counter] = randNum;

        // display marksArray
        std::cout << marksArray[counter] << std::endl;
    }

    // use a for loop when counter < ARRAY_SIZE
    for (counter = 0; counter < ARRAY_SIZE; counter++) {
        // set sum to marks array + sum
        sum += marksArray[counter];
    }
    // calculate average
    float average = sum/ARRAY_SIZE;

    // display the average
    std::cout << "The average of the above random marks is "
    << average << std::endl;
}
