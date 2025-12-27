#include <iostream>
#include <iomanip>
#include "mytemperature.h"
using namespace std;

int main() {
    cout << setw(12) << "Celsius" << setw(15) << "Fahrenheit"
        << " | " << setw(15) << "Fahrenheit" << setw(12) << "Celsius" << endl;

    for (int i = 0; i < 10; i++) {
        double cel = 40.0 - i;
        double fah = 120.0 - 10 * i;
        cout << setw(12) << fixed << setprecision(1) << cel
            << setw(15) << fixed << setprecision(1) << celsius_to_fah(cel)
            << " | " << setw(15) << fixed << setprecision(1) << fah
            << setw(12) << fixed << setprecision(2) << fahrenheit_to_cels(fah) << endl;
    }
    return 0;
}