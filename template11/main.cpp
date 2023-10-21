#include "template.hpp"
#include <iostream>

using namespace std;

int main() {
    constexpr int result1 = fibonacci<6>();
    constexpr int result2 = Fibonacci<6>::value;

    std::cout << "fibonacci<6>() = " << result1 << std::endl;
    std::cout << "Fibonacci<6>::value = " << result2 << std::endl;

    return 0;
}