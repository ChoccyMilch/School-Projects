/*Design a modular program that asks the user to enter a distance in kilometers, and then convert that distance to miles. The conversion formula is as follows:                                          Miles equals Kilometers cross times 0.6214*/
#include <iostream>
#include <string>

using namespace std;

// The prototyped function.
void KilometerToMiles(int num);

// Global constant.
const double CONST_MULTIPLICAND = 0.6214;

int main()
{
    
    int kilometers;
    string endCondition = "y";

    // The program loop.
    while (endCondition == "y" || endCondition == "Y") {
        std::cout << "Input the distance in kilometers: " << endl;
        std::cin >> kilometers;

        // The function/module call since C++ doesnt really use modules.
        KilometerToMiles(kilometers);

        // Prompt the user to continue.
        std::cout << "If you want to convert kilometers to miles again press 'y': " << endl;
        std::cin >> endCondition;
    }
    
}

void KilometerToMiles(int num) 
{
    // Stores the result inside a double (for accuracy) called toMiles which then outputs the value to the console.
    double toMiles = num * CONST_MULTIPLICAND;
    std::cout << toMiles << endl;
}
