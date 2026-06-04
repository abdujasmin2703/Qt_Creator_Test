#include <iostream>
#include "berechnungen.h"

int main()
{
    char rechensymbol;
    int wert1, wert2;

    std::cout << "Willkommen bei meinen Minirechner!\n";

    do
    {
        std::cout << "Geben Sie die erste Zahl ein:\n";
        std::cin >> wert1;
        std::cout << "Bitte waehlen Sie eine von den folgenden Rechenarten: (+, -, *, / oder %)\n";
        std::cin >> rechensymbol;
        std::cout << "Geben Sie die zweite Zahl ein:\n";
        std::cin >> wert2;

        switch(rechensymbol)
        {
        case('+'):
            addieren(wert1, wert2);
            break;
        case('-'):
            subtrahieren(wert1, wert2);
            break;
        case('*'):
            multiplizieren(wert1, wert2);
            break;
        case('/'):
            dividieren(wert1, wert2);
            break;
        case('%'):
            modulo(wert1, wert2);
            break;
        default:
            std::cout << "\nDie gewaehlte Operation ist ungueltig\n";
            break;
        }
    }while(abfrage());

    return 0;
}
