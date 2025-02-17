#include <iostream>

/* Zadanie 1.1 [2]
*  Pobierz z klawiatury trzy nieujemne liczby
*  całkowite. Znajdź największą z nich. Wyświetl sumę
*  pozostałych liczb tyle razy, ile wynosi wartość
*  największej liczby. 
*/

//definiujemy funkcje (bo moga byc problemy z kolejnoscia (jedna wywoluje druga))
void najwieksza(unsigned int, unsigned int, unsigned int);
void wyswietlanie(int, int);

//glowna funkcja definiuje 3 liczby nie ujemne i je pobiera a nastepnie przekazuje funkcji void najwieksza()
int main()
{
        unsigned int liczba1,liczba2,liczba3;

        std::cout << "Podaj 3 liczby: ";
        std::cin >> liczba1 >> liczba2 >> liczba3;
    
        najwieksza(liczba1, liczba2, liczba3);

        return 0;
}    
// funckcja najwieksza okresla najwieksza liczbe za pomoca if else a nastepnie przekazuje sume liczb i jej najwieksza do funkcji void wypisz()
void najwieksza(unsigned int liczba1, unsigned int liczba2, unsigned int liczba3)
{
        int suma{0};
        int najwieksza;

        if(liczba1 >= liczba2 && liczba1 >= liczba3)
        {
                suma = liczba2 + liczba3;
                najwieksza = liczba1;
        }
        else if(liczba2 >= liczba1 && liczba2 >= liczba3)
        {
                suma = liczba1 + liczba3;
                najwieksza = liczba2;
        }
        else
        {
                suma = liczba1 + liczba2;
                najwieksza = liczba3;
        }
        wyswietlanie(suma, najwieksza);
}
// funkcja uzywa petli do wypisania sumy tyle razy ile wynosila najwieksza liczba
void wyswietlanie(int suma, int najwieksza)
{
        for(int i = 0; i < najwieksza; i++)
        {
                std::cout << suma << "\n";
        }
}
