#include <iostream>
#include <string>
using namespace std;

int main() {
    // Variable declaration
    int steps;
    int weight;
    int caloriesBurned;
    const double CONST_MULTIPLICAND = 0.04;
    string name;

    // User prompts
    cout << "What is your name?\n";
    cin >> name;
    cout << "What is your weight?\n";
    cin >> weight;
    cout << "How many steps did you take today?\n";
    cin >> steps;

    // Calculation
    caloriesBurned = steps * CONST_MULTIPLICAND;

    // Output logic
    if (caloriesBurned < 200) {
        cout << "\nHello " + name + "! Here is your calorie burn summary for today:\n\nEstimated calories burned: " + std::to_string(caloriesBurned) + " kcal!" + "\nTry to be more active! Every step counts.";
    } else if (caloriesBurned >= 200 && caloriesBurned <= 399) {
        cout << "\nHello " + name + "! Here is your calorie burn summary for today:\n\nEstimated calories burned: " + std::to_string(caloriesBurned) + " kcal!" + "\nYou're right on track! Keep it up!";
    } else if (caloriesBurned >= 400) {
        cout << "\nHello " + name + "! Here is your calorie burn summary for today:\n\nEstimated calories burned: " + std::to_string(caloriesBurned) + " kcal!" + "\nExcellent effort! You're making great progress!";
    }

}