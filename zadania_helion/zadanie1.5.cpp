#include <iostream>

/*
* Zadanie 1.5 [1]
* Masz takie wyrażenie: (((a1+a2)*a3)-a4)/a5
* (elementy od a1 do a5 są typu float). Pobierz z
* klawiatury każdą ze zmiennych a1 do a5, oblicz
* wartość wyrażenia i wyświetl wynik. [1]
*/

//deklarujemy funkcje ktora pozniej wykorzystamy do wyliczenia wzoru
void oblicz(float, float, float, float, float);

//w glownej funkcji pobieramy 5 liczb i przekazujemy je funkcji void oblicz()
int main()
{
        float a1, a2, a3, a4, a5;

        std::cout << "Podaj 5 liczb: ";
        std::cin >> a1 >> a2 >> a3 >> a4 >> a5;
		while(a5 == 0)
		{
			std::cout << "nie mozna dzielic przez zero. Podaj inna 5 liczbe: ";
			std::cin >> a5;
		}

        oblicz(a1, a2, a3, a4, a5);

        return 0;
}

//funkcja ta oblicza nam wartosc z podanego wzoru
void oblicz(float a1, float a2, float a3, float a4, float a5)
{
        float suma = (((a1 + a2) * a3) - a4) / a5;
        std::cout << "suma wynosi: " << suma << "\n";
}