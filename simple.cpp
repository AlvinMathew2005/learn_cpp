#include <iostream>
using namespace std;

// Function to convert Celsius to Fahrenheit
double celsiusToFahrenheit(double celsius) {
    return (celsius * 9.0 / 5.0) + 32.0;
}

int main() {
    double celsius;
    
    cout << "Enter temperature in Celsius: ";
    cin >> celsius;

    // Call the function and display the result
    double fahrenheit = celsiusToFahrenheit(celsius);
    cout << "Temperature in Fahrenheit: " << fahrenheit << endl;

    return 0;
}