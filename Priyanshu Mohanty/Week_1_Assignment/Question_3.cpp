/* Write a program that takes a number as input and prints the sum of its
digits using a do-while loop. */
#include <iostream>
using namespace std;
int main()
{
    int num, temp, sum = 0;
    cout << "Enter a number: ";
    cin >> num;
    do
    {
        temp = num % 10;
        sum += temp;       
        num /= 10;
    } while (num != 0);
    cout << "Sum of digits in tne number: " << sum << endl;
    return 0;
}
