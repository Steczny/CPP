#include <iostream>

/*
Zadanie 1.13 [1]
Wyświetl liczby całkowite od 1 do 120 włącznie, z
pominięciem liczb podzielnych równocześnie przez
11 i 5. Wyświetl informacje, ile liczb się wyświetliło,
a ile zostało pominiętych. [1]
*/

int main()
{
        int wyswietlone{0};
        int pominiete{0};

        for(int i = 1; i <= 120; i++)
        {
                if(i % 5 == 0 && i % 11 == 0)
                {
                        pominiete++;
                }
                else
                {
                        std::cout << i << "\n";
                        wyswietlone++;
                }
        }
        std::cout << "Wyswietlono: " << wyswietlone << " liczb\n";
        std::cout << "Pominieto: " << pominiete << " liczb\n";
        
        return 0;
}
