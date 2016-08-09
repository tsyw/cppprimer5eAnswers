#ifndef EX8_13_H
#define EX8_13_H

#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using std::vector;
using std::string;

class PersonInfo;
void read(std::istream &is, vector<PersonInfo> &people);
void formatOutput(std::ostream &out, const vector<PersonInfo> &people);
bool valid(const string &num);

class PersonInfo
{
    friend void read(std::istream &is, vector<PersonInfo> &people);
    friend void formatOutput(std::ostream &out, const vector<PersonInfo> &people);
public: 
    PersonInfo() = default;
private:
    string name;
    vector<string> phones;

};

bool valid(const string &num)
{
    bool certify = true;
    for(const auto &n : num)
    {
        certify =  isdigit(n);
        if(!certify)
            return certify;
    }
    return certify;
}


string format(const string &str)
{
    return str.substr(0, 3) + "-" + str.substr(3, 3) + "-" + str.substr(6);
}


void read(std::istream &is, vector<PersonInfo> &people)
{
    string word, line;
    while(std::getline(is, line))
    {
        PersonInfo info;
        std::istringstream record(line);
        record >> info.name;
        while(record >> word)
        {
            info.phones.push_back(word);
        }
        people.push_back(info);
    }
}
void formatOutput(std::ostream &out, const vector<PersonInfo> &people)
{
    for(const auto &entry : people)
    {
        std::ostringstream formatted, badNums;
        for(const auto &nums : entry.phones)
        {
            if(!valid(nums))
            {
                badNums << " " << nums;
            }
            else
            {
                formatted << " " << format(nums);
            }
        }
        if(badNums.str().empty())
            out << entry.name << " " << formatted.str() << std::endl;
        else
            std::cerr << "input error: " << entry.name << " " << " invalid numbers: " << badNums.str() << std::endl;
        
    }
}

#endif
