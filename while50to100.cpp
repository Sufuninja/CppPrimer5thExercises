#include <iostream>
int main () 
{
    int sum = 0, val = 50;
    while (val <= 100) {
        sum = sum + val;
        ++val;
    }
    std::cout << "The sum of 50 inclusive to 100 is "
        << sum << std::endl;
    return 0;
}
