// Copyright (c) 2021 Youngjun Kim rights reserved
//
// Created by: Youngjun Kim
// Created on: May 2021
// This program checks the number's month


#include <iostream>
#include <string>

int main(){
    // this function checks the number's month
    std::string monthNumberAsString;
    int monthAsInt;

    // input
	std::cout << "Enter the number of a month: ";
	std::cin >> monthNumberAsString;

	monthAsInt = atoi(monthNumberAsString.c_str());

    switch(monthAsInt) {
        case 1 :
            std::cout << "January" << std::endl;
            break;
        case 2 :
            std::cout << "February" << std::endl;
            break;
        case 3 :
            std::cout << "March" << std::endl;
            break;
        case 4 :
            std::cout << "April" << std::endl;
            break;
        case 5 :
            std::cout << "May" << std::endl;
            break;
        case 6 :
            std::cout << "June" << std::endl;
            break;
        case 7 :
            std::cout << "July" << std::endl;
            break;
        case 8 :
            std::cout << "August" << std::endl;
            break;
        case 9 :
            std::cout << "September" << std::endl;
            break;
        case 10 :
            std::cout << "October" << std::endl;
            break;
        case 11 :
            std::cout << "November" << std::endl;
            break;
        case 12 :
            std::cout << "December" << std::endl;
            break;
        default :
            std::cout << "Invalid number" << std::endl;
    }
}
