#include <iostream>
#include "Calculate.h"
#include "Calculate.h"
#include <string>
int main()
{
std::cout << " this is calculate"<< std::endl;
std::cout << " you input 2 number and operation"<< std::endl;
std::cout << " if you want break, input 0"<< std::endl;

std::string a;
std::cin >> a;
int output = 0;

while (a!="0"){

    std::cout<<a << " = ";
    output = result(a);
    std::cout << output << std::endl;
    std::cin >> a;


}

}
