// Copyright (c) 2021 Brian Musembi All Rights Reserved
//
// Created by: Brian Musembi
// Created on: 29 April 2021
// This program calculates the surface area of a square-based pyramid
//     where the user gets to enter the base, height mm

#include <iostream>
#include <cmath>

int main() {
    // variable declarations

    int height;
    int base;
    int surface_area;

    // input
    std::cout << "Let's calculate the surface area of a square pyramid."
              << std::endl;
    std::cout << std::endl;
    std::cout << "Enter the base length (m): ";
    std::cin >> base;
    std::cout << "Enter the height (m): ";
    std::cin >> height;

    // process
    surface_area = (base * base) +  (base + base) * sqrt(((base * base)/4) +
              (height * height));
    std::cout << std::endl;

    // output
    std::cout << "Surface area is " << (surface_area) << " m²" << std::endl;}
