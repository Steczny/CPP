#include <iostream>

/*
* Zadanie 1.2 [1]
* Pobrana z klawiatury liczbe calkowita zweryfikuj pod katem parzystosci.
* Wyswietl tak lub nie, gdy jest lub nie jest parzysta.
*/

//deklarujemy funkcje ktorej bedziemy pozniej uzywac
void czy_parzysta(int);

//funkcja glowna int main ktora pobiera od uzytkownika liczba a nastepnie ma wywolac void czy_parzysta()
int main()
{
        int liczba;
        std::cout << "Podaj liczbe ktora chcesz zweryfikowac: ";
        std::cin >> liczba;

        czy_parzysta(liczba);

        return 0;
}

//funkcja czy_parzysta() okresla za pomoca operacji modulo czy dana liczba jest parzysta

void czy_parzysta(int liczba)
{
        if(liczba % 2 == 0)
        {
                std::cout << "liczba " << liczba << " jest parzysta";
        }
        else
        {
                std::cout << "liczba " << liczba << " nie jest parzysta";
        }
}