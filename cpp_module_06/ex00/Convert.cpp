#include "Convert.hpp"

Convert::Convert(void) : _value(0.0) {}

Convert::Convert(const std::string &input)
    : _input(input), _value(0.0) {}

Convert::Convert(const Convert &srcObject)
    : _input(srcObject._input), _value(srcObject._value) {}

Convert &Convert::operator=(const Convert &srcObject)
{
    if (this != &srcObject)
    {
        *const_cast<std::string *>(&_input) = srcObject._input;
        *(const_cast<long double *>(&(_value))) = srcObject._value;
    }
    return (*this);
}

const long double &Convert::getValue(void) const
{
    return (_value);
}
const std::string &Convert::getInput(void) const
{
    return (_input);
}
bool Convert::isChar(std::string input)
{
    if (input.length() == 1 && !isdigit(input[0]))
        return (true);
    return (false);
}

bool Convert::isInt(std::string input)
{
    unsigned int i;

    i = 0;
    if ((input[i] == '-' || input[i] == '+') && input.length() > 1)
        i++;
    for (; i < input.length(); i++)
    {
        if (!isdigit(input[i]))
            return (false);
    }
    return (true);
}

bool Convert::isFloat(std::string input)
{
    unsigned int i;
    bool dot = false;
    bool alphaF = false;

    i = 0;
    if (input == "inff" || input == "-inff" || input == "+inff" || input == "nanf")
        return (true);
    if ((input[i] == '-' || input[i] == '+') && input.length() > 1)
        i++;
    for (; i < input.length(); i++)
    {
        if (!isdigit(input[i]) && input[i] != 'f' && input[i] != '.')
            return (false);
        if (input[i] == '.' && dot)
            return (false);
        else if (input[i] == '.')
            dot = (true);
        if (input[i] == 'f' && alphaF)
            return (false);
        else if (input[i] == 'f')
            alphaF = (true);
    }
    if (input[input.length() - 1] != 'f')
        return (false);
    if (!dot)
        return (false);
    return (true);
}

bool Convert::isDouble(std::string input)
{
    unsigned int i;
    bool dot = (false);

    i = 0;
    if (input == "inf" || input == "-inf" || input == "+inf" || input == "nan")
        return (true);
    if ((input[i] == '-' || input[i] == '+') && input.length() > 1)
        i++;
    for (; i < input.length(); i++)
    {
        if (!isdigit(input[i]) && input[i] != '.')
            return (false);
        if (input[i] == '.' && dot)
            return (false);
        else if (input[i] == '.')
            dot = true;
    }
    if (!dot)
        return (false);
    return (true);
}
std::string Convert::floatToString(const char *a)
{
    char *b = (char *)a;

    size_t i = strlen(b);
    char c[i];
    strncpy(c, b, i - 1);
    c[i - 1] = '\0';
    std::string str(c);
    return (str);
}

bool Convert::findDot(std::string &base)
{
    size_t i;
    i = base.find('.');
    if (i == std::string::npos)
        return (true);
    else
    {
        if (base.length() == i + 2)
        {
            if (base[i + 1] == 48)
                return (true);
        }
    }
    return (false);
}

void Convert::printIntersection(std::ostream &out, std::string &base, int type)
{
    std::stringstream ss;
    long double ld;
    bool dotPoint = false;
    if (findDot(base))
        dotPoint = true;
    switch (type)
    {
    case 0:

        ld = static_cast<long double>(base[0]);
        printChar(out, ld);
        printInt(out, ld);
        printFloat(out, ld, dotPoint);
        printDouble(out, ld, dotPoint);
        break;
    case 1:
        ss << base;
        ss >> ld;
        printChar(out, ld);
        printInt(out, ld);
        printFloat(out, ld, dotPoint);
        printDouble(out, ld, dotPoint);
        break;
    case 2:
        ss << base;
        ss >> ld;
        printChar(out, ld);
        printInt(out, ld);
        printFloat(out, ld, dotPoint);
        printDouble(out, ld, dotPoint);
        break;
    case 3:
        ss << base;
        ss >> ld;
        printChar(out, ld);
        printInt(out, ld);
        printFloat(out, ld, dotPoint);
        printDouble(out, ld, dotPoint);
        break;
    }
}
void Convert::conversion(std::ostream &out, Convert &thisvalue)
{

    std::string base;
    if (thisvalue.isChar(thisvalue._input))
    {
        base = thisvalue._input;
        printIntersection(out, base, 0);
    }
    else if (thisvalue.isInt(thisvalue._input))
    {
        base = thisvalue._input;
        printIntersection(out, base, 1);
    }
    else if (thisvalue.isFloat(thisvalue._input))
    {
        base = floatToString((thisvalue._input).c_str());
        printIntersection(out, base, 2);
    }
    else if (thisvalue.isDouble(thisvalue._input))
    {
        base = thisvalue._input;
        printIntersection(out, base, 3);
    }
    else
        allImpossible(out);
    return;
}

void Convert::printChar(std::ostream &out, long double &ld)
{
    out << "char : ";
    char a = static_cast<char>(ld);
    if (std::isnan(ld) || std::isinf(ld) || ld > std::numeric_limits<unsigned char>::max() || ld < std::numeric_limits<unsigned char>::min())
        out << "impossible" << std::endl;
    else if (std::isprint(a))
        out << "'" << a << "'" << std::endl;
    else
        out << "Non displayable" << std::endl;
    return;
}

void Convert::printInt(std::ostream &out, long double ld)
{
    out << "int : ";
    if (std::isnan(ld) || std::isinf(ld) || ld > std::numeric_limits<int>::max() || ld < std::numeric_limits<int>::min())
        out << "impossible" << std::endl;
    else
        out << static_cast<int>(ld) << std::endl;
    return;
}
void Convert::printFloat(std::ostream &out, long double ld, bool dotPoint)
{
    out << "float : ";
    if (std::isinf(ld) && ld < 0)
        out << "-inff" << std::endl;
    else if (std::isinf(ld))
        out << "inff" << std::endl;
    else if (std::isnan(ld))
        out << "nanf" << std::endl;
    else
    {
        out << static_cast<float>(ld);
        if (dotPoint == true)
            out << ".0";
        out << "f" << std::endl;
    }
    return;
}
void Convert::printDouble(std::ostream &out, long double ld, bool dotPoint)
{
    out << "double : ";
    if (std::isinf(ld) && ld < 0)
        out << "-inf" << std::endl;
    else if (std::isinf(ld))
        out << "inf" << std::endl;
    else if (std::isnan(ld))
        out << "nan" << std::endl;
    else
    {
        out << static_cast<double>(ld);
        if (dotPoint == true)
            out << ".0";
        out << std::endl;
    }
    return;
}
std::ostream &operator<<(std::ostream &out, Convert &srcObject)
{
    srcObject.conversion(out, srcObject);
    return (out);
}
void Convert::allImpossible(std::ostream &out)
{
    out << "char : impossible\nint : impossible\nfloat : impossible\ndouble : impossible";
}
Convert::~Convert(void)
{
}