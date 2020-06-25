#include <iostream>

int main() {
    int temp = 3;

    auto b = [temp] (int b) -> int {return temp + b;};

    std::cout << b(9);

    return 0;
}