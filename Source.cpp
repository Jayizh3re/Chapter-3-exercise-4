#include <iostream>
#include <iomanip>

int main()
{
    double replacementCost;

    std::cout << "Enter the replacement cost of the building: ";
    if (!(std::cin >> replacementCost) || replacementCost < 0.0) {
        std::cerr << "Invalid input. Please enter a non-negative number.\n";
        return 1;
    }

    double minInsurance = replacementCost * 0.80;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Minimum insurance to purchase: $" << minInsurance << '\n';

    return 0;
}