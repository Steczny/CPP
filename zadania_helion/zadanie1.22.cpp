#include <iostream>
#include <vector>

/*
Zadanie 1.22 [1]
Pobieraj liczby z klawiatury i wkładaj je do
tablicy/wektora. Pobieranie ma się zakończyć, gdy
zostanie wprowadzona dwa razy z rzędu taka sama
liczba. [1]
*/

int main()
{
    int podana;
    std::vector<int> liczby;
    int i{0};
    while(true)
    {
        std::cin >> podana;
        liczby.push_back(podana);
        if(liczby[i] == liczby[i-1])
        {
            break;
        }
        i++;
    }
    
    return 0;
}