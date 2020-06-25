#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    std::vector temp = {1, 2, 3, 4};

    std::fill_n(temp.begin(), temp.size(), 0);

    for(auto i : temp) {
        std::cout << i << " ";
    }
    return 0;
}
