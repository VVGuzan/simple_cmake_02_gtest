#include "mylib.hpp"
#include <iostream>

int main(int argc, char *argv[])
{
    int x = 4;
    int y = 6;
    double z = 10.8;
    double zz = -0.1;
    std::cout << "int, int, int: " << Ssum(x, y) << std::endl;
    std::cout << "double, int, int: " << Ssum(x, y) << std::endl;
    std::cout << "double, double, double: " << Ssum(z, zz) << std::endl;
    std::cout << "Multuply (int, double): " << Mmul(x, z) << std::endl;
    std::cout << "Multuply (double, double): " << Mmul(zz, z) << std::endl;
    {
        // std::cout << "Input: " << argv[1] << " & " << argv[2] << std::endl;
        std::string ss = argv[1];
        x = std::stoi(ss);
        ss = argv[2];
        y = std::stoi(ss);
        // zz = static_cast<std::string>(argv[2]);
        std::cout << "Sum of input -> int: " << Ssum(x, y) << std::endl;
        std::cout << "Mult of input -> double: " << Mmul(std::stod(argv[1]), std::stod(argv[2])) << std::endl;
        std::cout << "Square of first input -> double: " << Mmul(std::stod(argv[1]), std::stod(argv[1])) << std::endl;
        std::cout << "Square of second input -> double: " << Mmul(std::stod(argv[2]), std::stod(argv[2])) << std::endl;
    }
}