#include <iostream>
#include <string>

using namespace std;

int main() {
    // Variable declaration
    string condition = "y";
    int counter;
    int number;
    int sum;

    // Main Program Loop
    while (condition == "y" || condition == "Y") {
        sum = 0;
        number = 0;

        // Series Addition Loop
        do {
            cout << "Enter a series of positive numbers, type a negative number to end the series and display the sum: " << endl;
            cin >> number;
            // Logic so that negative numbers aren't added when the sum is calculated
            if (number < 0) {
                break;
            }
            sum += number;
        }  while (number >= 0);

        cout << "The sum of you series is: " << sum << endl;
        cout << "Type 'y' to make a new series: " << endl;
        cin >> condition;

    }

    cout << "Series program exited. Goodbye!" << endl;
}