#include <iostream>

using namespace std;

int main() {

    double temp;
    char unit;
    
    cout << "****temperature conversion********" << endl;
    cout << "F = Fahrenheit" << endl;
    cout << "C = Celsius" << endl;
    cout << "What unit whoud tou like to covert" << endl;
    
    cin >> unit;

    if (unit == 'F' || 'f' )
    {
        cout << "Enter temperature\n" ;
        cin >> temp;

        temp = (1.8 * temp) + 32.0;
        cout << "Temperature is " << temp << "F\n ";
    }
    else if (unit == 'C' || 'c' )
    {
        cout << "Enter temperature\n" ;
        cin >> temp;

        temp = (temp - 32.0) / 1.8;
        cout << "Temperature is " << temp << "C\n ";
    }
    else{
        cout << "Plese enter only C or F\n";
    }
    
    



    cout << "**********************************" << endl;
    return 0;
}