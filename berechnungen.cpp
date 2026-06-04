#include "berechnungen.h"
#include <iostream>

int addieren(int a, int b)
{
    return (a + b);
}

int subtrahieren(int a, int b)
{
    return (a - b);
}

int multiplizieren(int a, int b)
{
    return (a * b);
}

int dividieren(int a, int b)
{
    if(a == 0 || b == 0)
    {
        std::cout << "Division mit 0 nicht erlaubt!";
        return EXIT_FAILURE;
    }
    else
    {
        return (static_cast<double>(a) / static_cast<double>(b));
    }
}