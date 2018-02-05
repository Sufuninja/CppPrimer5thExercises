#include <iostream>
int main () {

    int min = 0, max = 0;
    std::cout << "Enter a minimum integer and a maximum integer to print out all intergers within that range." << std::endl;
    std::cin >> min >> max;
    std::cout << "Range from " << min << " to " 
        << max << std::endl;
    if (min >= max) 
        std::cout << "Must enter a min integer that is less than the maximum integer." << std::endl;
    else {
        while (min <= max) {
            std::cout << min << std::endl;
            ++min;
        }
    }
    return 0;
}

