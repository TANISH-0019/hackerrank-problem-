#include <iostream>
#include <iomanip>

int main() {
    int int_val;
    long long long_val;
    char char_val;
    float float_val;
    double double_val;

    std::cin >> int_val >> long_val >> char_val >> float_val >> double_val;

    std::cout << int_val << std::endl;
    std::cout << long_val << std::endl;
    std::cout << char_val << std::endl;
    std::cout << std::fixed << std::setprecision(3) << float_val << std::endl;
    std::cout << std::fixed << std::setprecision(9) << double_val << std::endl;

    return 0;
}
