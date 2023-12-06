#include <iostream>

using namespace std;

int main() 
{
    int num;
    int temp = 0;
    
    cout << "Enter number: ";
    cin >> num;
    
    while(num > 0)
    {
        temp = temp * 10 + num % 10; 
        num /= 10; 
    }
    
    while(temp > 0)
    {
        cout << temp % 10 << endl;
        temp /= 10;
    }
    return 0;
}
