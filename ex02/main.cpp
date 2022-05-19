#include "Array.hpp"

#include <iostream>

int main()
{
    {
        Array<int> intArray(5);

        for (int i = 0; i < 5; i++)
        {
            intArray[i] = i * 10;
        }
        std::cout << intArray[3] << std::endl;

        intArray[4] = 100;

        std::cout << intArray[4] << std::endl;

        Array<int> copied;

        copied = intArray;
        for (int i = 0; i < 5; i++)
        {
            std::cout << copied[i] << std::endl;
        }
    }
    {
        Array<std::string> strArray(3);
        std::cout << strArray.size() << std::endl;
        strArray[0] = "hogehoge";
        strArray[1] = "fugafuga";
        strArray[2] = "piyopiyo";
        for (int i = 0; i < 3; i++)
        {
            std::cout << strArray[i] << std::endl;
        }
        try
        {
            std::string str = strArray[100];
            (void)str;
        }
        catch (std::exception &e)
        {
            std::cout << e.what() << std::endl;
        }
    }
}
