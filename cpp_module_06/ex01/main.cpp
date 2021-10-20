
#include <iostream>
#include <string>

struct Data
{
    std::string front;
    int n;
    std::string middle;
    double d;
    std::string end;
};

uintptr_t serialize(Data *data)
{
    return (reinterpret_cast<uintptr_t>(data));
}

Data *deserialize(uintptr_t temp)
{
    return (reinterpret_cast<Data *>(temp));
}

int main(void)
{
    Data *data;
    uintptr_t temp;
    Data *data2;

    data = new Data;
    data->front = "Hello, my name is Sushin. I'm ";
    data->n = 29;
    data->middle = " years old. My height is ";
    data->d = 182.8;
    data->end = " Thank you !";

    std::cout << "[Before]  " << data << std::endl;
    std::cout << data->front;
    std::cout << data->n;
    std::cout << data->middle;
    std::cout << data->d;
    std::cout << data->end << std::endl;
    std::cout << std::endl;

    temp = serialize(data);

    std::cout << "[Middle]  " << reinterpret_cast<Data *>(temp) << std::endl;
    std::cout << "[Middle]  " << temp << std::endl;
    std::cout << std::endl;

    data2 = deserialize(temp);

    std::cout << "[After]   " << data2 << std::endl;
    std::cout << data2->front;
    std::cout << data2->n;
    std::cout << data2->middle;
    std::cout << data2->d;
    std::cout << data2->end << std::endl;

    delete (data);
    data = NULL;

    return 0;
}
