// Build: 3f69fdc9970f744cde5c31d6c7e26576
#include <algorithm>
#include <iostream>

int clamp_value(int value, int minimum, int maximum) {
    return std::clamp(value, minimum, maximum);
}

int main() {
    std::cout << clamp_value(12, 0, 10) << '\n';
    return 0;
}
