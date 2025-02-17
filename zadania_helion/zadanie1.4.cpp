#include <iostream>
#include <cctype>

/* Zadanie 1.4 [1]
*  Pobierz znak (char) z klawiatury. Sprawdź, czy to
*  samogłoska, spółgłoska, czy cyfra. Poinformuj o
*  tym, jaki to znak. Uwzględnij tylko małe litery
*  alfabetu angielskiego i cyfry. [1]
*/

//deklarujemy funkcje ktore uzyjemy pozniej
bool czy_samogloska(char);
void opis_symbolu(char[], char, int);

//funkcja main pobiera od uzytkownika symbol i okresla rozmiar tablicy do iteracji
int main()
{
        char samogloski[] = {"aeiouy"};
        int rozmiar = sizeof(samogloski)/sizeof(samogloski[0]);
        char symbol;

        std::cout << "Podaj symbol: ";
        std::cin >> symbol;

        opis_symbolu(samogloski, symbol, rozmiar);

        return 0;
}

//sprawdza czy symbol jest samogloska i zwraca true lub false
bool czy_samogloska(char samogloski[], char symbol, int rozmiar)
{
        for(int i = 0; i < rozmiar; i++)
        {
                if(symbol == samogloski[i])
                {
                        return true;
                }
                else
                {
                        return false;
                }
        }
        return 0;
}
//dopasowywuje symbol od opisu
void opis_symbolu(char samogloski[], char symbol, int rozmiar)
{
        if(isdigit(symbol))
        {
                std::cout << "jest to cyfra";
        }
        else if(czy_samogloska(samogloski, symbol, rozmiar))
        {
                std::cout << "jest to samogloska";
        }
        else if(isalpha(symbol))
        {
                std::cout << "jest to wspolgloska";
        }
        else
        {
                std::cout << "jest to jakis znak";
        }
}