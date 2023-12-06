#include <iostream>

using namespace std;

int main() 
{
    int celsius;
    
    cout << "Enter temperature in celsius: ";
    cin >> celsius;
    
    cout << "Temperature in fahrenheit is " << (celsius * 9./5) + 32;
    
    return 0;
}
