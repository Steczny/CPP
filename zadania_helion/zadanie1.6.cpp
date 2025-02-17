#include <iostream>

/* Zadanie 1.6 [1]
* Pobierz pięć liczb z klawiatury i wyświetl
* informację, ile spośród nich było parzystych, a ile
* nieparzystych. [1]
*/

void licznik(int[], int);

int main()
{
        int liczby[5];
        int rozmiar;
        for(int i = 0; i < 5; i++)
        {
                std::cout << "Podaj " << i+1 << " liczbe: ";
                std::cin >> liczby[i];
        }
        rozmiar = sizeof(liczby)/sizeof(liczby[0]);

        licznik(liczby, rozmiar);

        return 0;
}

void licznik(int liczby[], int rozmiar)
{
        int parzyste{0};
        int nieparzyste{0};

        for(int i = 0; i < rozmiar; i++)
        {
                if(liczby[i] % 2 == 0)
                {
                        parzyste++;
                }
                else
                {
                        nieparzyste++;
                }
        }
        std::cout << "Wprowadziles " << parzyste << " parzystych liczb" << "\n";
        std::cout << "Wprowadziles " << nieparzyste << " nieparzystych liczb" << "\n";
}