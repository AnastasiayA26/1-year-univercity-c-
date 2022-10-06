#include <iostream>

int main() {
    int a;
    int b;
    int c, d;
    std::cin >> a;
    b = a / 3600;
    std::cout << b % 24 << ":" << ((a - b * 3600) / 60) / 10 << "" << ((a - (b % 24) * 3600) / 60) % 10 << ":" << (a % 60) / 10 << (a % 60) % 10;
    return 0;
}