#include <iostream>

int findGCD(int n1, int n2) {
    while (n1 != n2) {
        if (n1 > n2) {
            n1 = n1 - n2;
        } else {
            n2 = n2 - n1;
        }
    }
    return n1; // or n2, since n1 == n2 here
}

int main() {
    int num1, num2;
    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;
    std::cout << "GCD of " << num1 << " and " << num2 << " is " << findGCD(num1, num2);
    return 0;
}