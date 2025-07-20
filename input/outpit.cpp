#include <iostream>
#include <sstream>
#include <string>
#include <vector>

int main() {
    std::string line;
    std::getline(std::cin, line);

    std::stringstream ss(line);
    std::vector<int> numbers;
    int num;
    while (ss >> num) {
        numbers.push_back(num);
    }

    if (numbers.size() == 3) {
        int sum = numbers[0] + numbers[1] + numbers[2];
        std::cout << sum << std::endl;
    }

    return 0;
}
