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

bool isShorter(const std::string &s1, const std::string &s2) {
    return s1.size() < s2.size();
}

int main() {
    std::string temp;
    std::vector<std::string> words;
    while(std::cin >> temp) {
        words.push_back(temp);
    }

    elimDups(words);

    std::stable_sort(words.begin(), words.end(), isShorter);
    for(auto s : words) {
        std::cout << s << " ";
    }
    std::cout << std::endl;
    return 0;
}