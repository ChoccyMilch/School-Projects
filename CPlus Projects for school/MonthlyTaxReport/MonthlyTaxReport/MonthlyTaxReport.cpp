/*A retail company must file a monthly sales tax report listing the total sales for the month, and the amount of state and county sales tax collected. The state sales tax rate is 4 percent and the county sales tax rate is 2 percent. Design a modular program that asks the user to enter the total sales for the month. Using this amount, the application should calculate and display the following:
                  • The amount of county sales tax
                  • The amount of state sales tax
                  • The total sales tax (county plus state)*/
#include <iostream>
#include <string>

using namespace std;

// Function prototype.
void MonthlyTax(int monthlySales);

// Decalaring global constants for the tax rates.
const float CONST_STATE_TAX = 0.04;
const float CONST_COUNTY_TAX = 0.02;

int main()
{   
    // Declaring my variables.
    int totalMonthlySales;
    string endCondition = "y";

    // The program loop
    while (endCondition == "y" || endCondition == "Y") 
    {
        // Prompt user for total monthly sales.
        std::cout << "How much money in total sales did you make this month? " << std::endl;
        std::cin >> totalMonthlySales;

        // The function/module call.
        MonthlyTax(totalMonthlySales);

        // Prompt user to continue.
        std::cout << "If you would like to run the calculations again, please press 'y'." << std::endl;
        std::cin >> endCondition;
    }
    
}

void MonthlyTax(int monthlySales) 
{
    // Local variable that stores the total monthly sales multiplied by the state tax rate and outputs the result to the console.
    double stateTax = monthlySales * CONST_STATE_TAX;
    std::cout << "You owe: " << stateTax << " in state taxes." << std::endl;
    
    // Local variable that stores the total monthly sales multiplied by the county tax rate and outputs the result to the console.
    double countyTax = monthlySales * CONST_COUNTY_TAX;
    std::cout << "You owe: " << countyTax << " in county taxes." << std::endl;

    // Outputs the total amount in taxes that is owed.
    std::cout << "You owe: " << countyTax + stateTax << " in total taxes." << std::endl;

}