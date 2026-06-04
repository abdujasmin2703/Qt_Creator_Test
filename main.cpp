#include <iostream>
#include "berechnungen.h"

int main()
{
    char rechensymbol;
    int wert1, wert2;
    std::cout << "Willkommen bei meinen Minirechner!\nGeben Sie die erste Zahl ein:\n";
    std::cin >> wert1;
    std::cout << "Bitte wählen Sie eine von den folgenden Rechenarten: (+, -, *, / oder %)\n";
    std::cin >> rechensymbol;
    std::cout << "Geben Sie die zweite Zahl ein:\n";
    std::cin >> wert2;

    switch(rechensymbol)
    {
    case('+'):
        std::cout << "\nDie Adition von " << wert1 << " und " << wert2 << " beträgt: " << addieren(wert1, wert2);
        break;
    case('-'):
        std::cout << "\nDie Subtraktion von " << wert1 << " und " << wert2 << " beträgt: " << subtrahieren(wert1, wert2);
        break;
    case('*'):
        std::cout << "\nDie Multiplikation von " << wert1 << " und " << wert2 << " beträgt: " << multiplizieren(wert1, wert2);
        break;
    case('/'):
        std::cout << "\nDie Division von " << wert1 << " und " << wert2 << " beträgt: " << dividieren(wert1, wert2);
        break;
    default:
        std::cout << "\nDie gewählte Operation ist ungültig\n";
        break;
    }

    return 0;
}
