#include <iostream>
#include <cmath>
#include <iomanip>
int main() {
    long long fast = 0;
    long long pow1 = 1;
    double pow2 = 0;
    for (unsigned short int i = 0; i <= 127; i++) {
        std::cout << static_cast<char>(i) << std::endl;
    }
    std::cout << "Input symbol: ";
    char sym;
    std::cin >> sym;
    if ((sym >= 48) && (sym <= 57)) {
        std::cout << " It's Digit" << std::endl;
    }
    else if (((sym >= 65) && (sym <= 90)) || ((sym >= 97) && (sym <= 122))) {
        std::cout << " It's letter" << std::endl;
    }
    else {
        std::cout << " It's unknown symbol" << std::endl;
    }
    std::cout << "Input x: ";
    unsigned int x;
    std::cin >> x;
    std::cout << "Result: ";

    switch (x % 4) {
    case 0:
        std::cout << -1 << std::endl;
        break;
    case 1:
        std::cout << pow(x, -1) << std::endl;
        break;
    case 2:
        std::cout << "-" << x << std::endl;
        break;
    case 3:
        std::cout << x << std::endl;
        break;
    }
    std::cout << "Input y = ";
    double y;
    std::cin >> y;
    float s = sin(y);
    std::cout << "sin(" << y << ") = ";
    std::cout << std::setprecision(7) << s << std::endl;
    long long kol;
    double res;
    for (auto i = 0.01; i >= 0.000001; i *= 0.1) {
        kol = 0;
        res = 0;
        fast = 1;
        pow1 = 1;
        pow2 = y;
        while (abs(s - res) > i) {
            res = res + pow1 * pow2 / fast;
            ++kol;
            fast *= 2 * kol * (2 * kol + 1);
            pow1 *= -1;
            pow2 *= y * y;
        }
        std::cout << "The accuracy: " << i << " Value of iterations: " << kol << " Result: " << std::setprecision(7) << res << std::endl;
    }
    return 0;
}
