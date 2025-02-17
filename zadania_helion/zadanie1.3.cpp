#include <iostream>

/*
* Zadanie 1.3 [1]
* Pobierz liczbe calkowita z klawiatury i sprawdz,
* czy jest podzielna: przez 3 i przez 5
* przez 3 ale nie przez 5
* przez 5 ale nie przez 3
* ani przez 3 ani przez 5.
* Wlasciwa odpowiedz wyswietl na ekranie
*/

// deklaracja funkcji ktora uzyjemy pozniej
void podzielnosc(int);

// funkcja main to pobrania od uzytkownika liczby i wywolaniu funkcji void podzielnosc()

int main()
{
        int liczba;

        std::cout << "Podaj liczbe: ";
        std::cin >> liczba;

        podzielnosc(liczba);

        return 0;
}

void podzielnosc(int liczba)
{
        if(liczba % 3 == 0 && liczba % 5 == 0)
        {
                std::cout << "Liczba jest podzielna przez 3 oraz 5 \n";
        }
        else if(liczba % 3 == 0 && liczba % 5 != 0)
        {
                std::cout << "Liczba jest podzielna przez 3 ale nie przez 5 \n";
        }
        else if(liczba % 3 != 0 && liczba % 5 == 0)
        {
                std::cout << "Liczba jest podzielna przez 5 ale nie przez 3 \n";
        }
        else
        {
                std::cout << "Liczba nie jest podzielna przez 3 ani przez 5 \n";
        }
}