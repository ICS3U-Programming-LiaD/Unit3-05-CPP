
// Copyright [2022] Lia D
//  Created by: Lia Duggan
//  Created on: October 14th
//  This program This program asks the user for a number
//  between 1 - 12 and then tells them the corresponding month

#include <iostream>
int main() {
// declares the variable
    int userMonth;

// Asking the user for the number corresponding to a month
    std::cout << "Enter the number for a month: ";
    std::cin >> userMonth;

// Stating the month the user has selected as a string
    switch (userMonth) {
        case 1 :
         std::cout << userMonth << " represents January. /n";
         break;
        case 2:
            std::cout << userMonth << " represents February. /n";
            break;
        case 3:
            std::cout << userMonth << " represents March. /n";
            break;
        case 4:
            std::cout << userMonth << " represents April. /n";
            break;
        case 5:
            std::cout << userMonth << " represents May. /n";
            break;
        case 6:
            std::cout << userMonth << " represents June. /n";
            break;
        case 7:
            std::cout << userMonth << " represents July. /n";
            break;
        case 8:
            std::cout << userMonth << " represents August. /n";
            break;
        case 9:
            std::cout << userMonth << " represents September. /n";
            break;
        case 10:
            std::cout << userMonth << " represents October. /n";
            break;
        case 11:
            std::cout << userMonth << " represents November. /n";
            break;
        case 12:
            std::cout << userMonth << " represents December. /n";
            break;
// The error case
    default :
std::cout << "error " << userMonth << " does not correspond to a month./n";
}
}
