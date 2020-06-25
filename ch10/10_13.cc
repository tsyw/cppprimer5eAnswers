#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

bool longerThan5 (const std::string &word) {
    return word.size() >= 5;
}

int main() {
    std::vector<std::string> words;
    std::string temp;
    while(std::cin >> temp) {
        words.push_back(temp);
    }

    for(auto s : words) {
        std::cout << s << " ";
    }
    std::cout << std::endl;

    auto it = std::partition(words.begin(), words.end(), longerThan5);

    for(auto s : words) {
        std::cout << s << " ";
    }
    std::cout << std::endl;

    for(auto i = words.cbegin(); i != it; ++i) {
        std::cout << *i << " ";
    }
    std::cout << std::endl;

    return 0;
}