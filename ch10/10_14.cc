#include <iostream>

int main() {
    auto f = [](int a, int b) -> int {
        return a + b;
    };
    int a = 1, b = 2;
    std::cout << f(a, b);

    return 0;
}