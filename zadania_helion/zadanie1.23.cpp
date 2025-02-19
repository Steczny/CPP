#include <iostream>
#include <vector>

/*
Zadanie 1.23 [2]
Pobieraj liczby z klawiatury i wkładaj je do wektora
pod warunkiem, że taka liczba jeszcze w wektorze
nie istnieje. Jeżeli istnieje, zignoruj ją i pobieraj
dalej. Pobieranie zakończy się, gdy wektor będzie
zawierał dziesięć liczb. [2]
*/

int main()
{
    std::vector<int> liczby;
    int podana;
    bool powtarza;
    
    while(liczby.size() < 10)
    {
        std::cin >> podana;
        powtarza = false;
        
        for(auto liczba : liczby)
        {
            if(podana == liczba)
            {
                powtarza = true;
            }
        }
        
        if(!powtarza)
        {
            liczby.push_back(podana);
        }
        else
        {
            std::cout << "liczba zostala juz wprowadzona! \n";
        }
    }
    std::cout << "Podane liczby: ";
    for(auto liczba : liczby)
    {
        std::cout << liczba << " ";
    }
    
    return 0;
}