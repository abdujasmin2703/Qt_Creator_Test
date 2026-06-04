#include "berechnungen.h"
#include <iostream>

void addieren(int a, int b)
{
    std::cout << "\nDie Adition von " << a << " und " << b << " betraegt: " << (a + b);
}

void subtrahieren(int a, int b)
{
    std::cout << "\nDie Subtraktion von " << a << " und " << b << " betraegt: " << (a - b);
}

void multiplizieren(int a, int b)
{
    std::cout << "\nDie Multiplikation von " << a << " und " << b << " betraegt: " <<  (a * b);
}

void dividieren(int a, int b)
{
    if(a == 0 || b == 0)
    {
        std::cout << "Division mit 0 nicht erlaubt!";
        return;
    }
    else
    {
        std::cout << "\nDie Division von " << a << " und " << b << " betraegt: " << (static_cast<double>(a) / static_cast<double>(b));
    }
}

void modulo(int a, int b)
{
    std::cout << "\nDer Rest der Divison von: " << a << " und " << b << " betraegt: " << (a % b);
}

bool abfrage()
{
    std::string abfrage;

    std::cout << "\nMoechten Sie eine weitere Rechnung durchfuehren? (Ja/Nein)\n";
    std::cin >> abfrage;
    if(abfrage == "ja" || abfrage == "Ja" || abfrage == "JA" || abfrage == "jA")
    {
        return true;
    }
    else
    {
        return false;
    }
}