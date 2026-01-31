#include <iostream>
#include <iomanip> 

using namespace std;

double computeBill(int units_consumed) {
    
    double bill = 0.0;

    if (units_consumed > 0 && units_consumed <= 100) {
        bill = units_consumed * 0.50;
    }
    else if (units_consumed > 100 && units_consumed <= 200) {
        bill = 100 * 0.50; 
        bill += (units_consumed - 100) * 0.75;
    }
    else if (units_consumed > 200) {
        bill = 100 * 0.50;
        bill += 100 * 0.75;
        bill += (units_consumed - 200) * 1.20;
    }

    return bill;
}

int main() {
    
    int units;
    double base_charge;
    double total_bill;
    const double FIXED_CHARGE = 5.0; 

    units = 250;

    base_charge = computeBill(units);

    total_bill = base_charge + FIXED_CHARGE;

    cout << fixed << setprecision(2);

    cout << "Units: " << units << endl;
    cout << "Base charge: " << base_charge << " KM" << endl;
    cout << "Total bill (with fixed charge): " << total_bill << " KM" << endl;

    return 0;
}