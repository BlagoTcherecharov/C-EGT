#include <iostream>

using namespace std;

bool sumOfDigits(int num)
{
    int sum = 0;
    while (num) 
    {
        sum = sum + num % 10;
        num = num / 10;
        if(sum == 9)
            return true;
    }
    return false;
}

int main() 
{
    int array[] = {100, 534, 900, 123, 142, 153};
    bool digitsEqualNine;
    
    for(int i = 0; i < size(array); i ++)
    {
        digitsEqualNine = sumOfDigits(array[i]);
        if (digitsEqualNine == true)
            cout << array[i] << "'s digits are equal to 9 when summed" << endl;
        else
            cout << array[i] << "'s digits are not equal to 9 when summed" << endl;
    }
    
    return 0;
}
