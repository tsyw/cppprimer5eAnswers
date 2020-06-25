#include <algorithm>
#include <iostream>
#include <vector>
#include <string>


void elimDups(std::vector<std::string> & words) {
    for(auto s : words) {
        std::cout << s << " ";
    }
    std::cout << std::endl;

    std::sort(words.begin(), words.end());
    for(auto s : words) {
        std::cout << s << " ";
    }
    std::cout << std::endl;

    auto it = std::unique(words.begin(), words.end());
    for(auto s : words) {
        std::cout << s << " ";
    }
    std::cout << std::endl;

    words.erase(it, words.end());

    for(auto s : words) {
        std::cout << s << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::string temp;
    std::vector<std::string> words;
    while(std::cin >> temp) {
        words.push_back(temp);
    }

    elimDups(words);

    return 0;
}