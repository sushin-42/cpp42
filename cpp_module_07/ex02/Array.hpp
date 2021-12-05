#include <iostream>
#include <exception>

template <typename T>
class Array
{
private:
    T *_arr;
    unsigned int _len;

public:
    Array() : _arr(nullptr), _len(0)
    {
        std::cout << "default constructor" << std::endl;
    };

    Array(unsigned int n) : _arr(nullptr), _len(n)
    {
        _arr = new T[n];
        std::cout << "unsigned int constructor" << std::endl;
    };

    Array(const Array &srcObject) : _arr(nullptr), _len(srcObject._len)
    {
        unsigned int i;

        _arr = new T[srcObject._len];
        for (i = 0; i < _len; i++)
        {
            _arr[i] = srcObject._arr[i];
        }
        std::cout << "copy constructor" << std::endl;
    };

    Array &operator=(const Array &srcObject)
    {
        unsigned int i;

        if (_arr != nullptr)
        {
            delete[] _arr;
            _arr = nullptr;
        }
        _len = srcObject._len;
        if (_len)
        {
            _arr = new T[_len];
            for (i = 0; i < _len; i++)
            {
                _arr[i] = srcObject._arr[i];
            }
        }
        std::cout << "assigned operator" << std::endl;
        return (*this);
    }

    T &operator[](const unsigned int ind) throw(std::exception)
    {
        std::cout << "closer operator" << std::endl;
        if (ind >= _len)
        {
            throw(rangeException());
        }
        return (_arr[ind]);
    }

    class rangeException : public std::exception
    {
        const char *what(void) const _NOEXCEPT
        {
            return ("array length smaller than index");
        }
    };

    unsigned int size() const
    {
        std::cout << "size func called" << std::endl;
        return (_len);
    };

    ~Array()
    {
        std::cout << "destructor" << std::endl;
        if (_arr != nullptr)
        {
            delete[] _arr;
            _arr = nullptr;
        }
    };
};
