#include <iostream>

using namespace std;

int main() {
    int num1, num2, num3;

    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    // Use nested ternary operators to determine the largest
    int largest = (num1 > num2) ? (num1 > num3 ? num1 : num3) : (num2 > num3 ? num2 : num3);

    cout << "The largest number is: " << largest << endl;

    return 0;
}
