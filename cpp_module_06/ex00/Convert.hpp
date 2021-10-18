#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <iostream>
#include <string>
#include <cmath>
#include <sstream>
#include <iomanip>
#include <cstring>
#include <typeinfo>
class Convert
{
private:
    const std::string _input;
    const long double _value;

public:
    Convert(void);
    Convert(const std::string &input);
    Convert(const Convert &srcObject);
    Convert &operator=(const Convert &srcObject);

    const long double &getValue(void) const;
    const std::string &getInput(void) const;

    bool isChar(std::string input);
    bool isInt(std::string input);
    bool isFloat(std::string input);
    bool isDouble(std::string input);

    void printIntersection(std::ostream &out, std::string &base, int type);
    void printChar(std::ostream &out, long double &ld);
    void printInt(std::ostream &out, long double ld);
    void printFloat(std::ostream &out, long double ld, bool dotPoint);
    void printDouble(std::ostream &out, long double ld, bool dotPoint);

    std::string floatToString(const char *a);
    bool findDot(std::string &base);

    void allImpossible(std::ostream &out);

    void conversion(std::ostream &out, Convert &thisvalue);
    ~Convert(void);
};
std::ostream &operator<<(std::ostream &out, Convert &srcObject);
#endif