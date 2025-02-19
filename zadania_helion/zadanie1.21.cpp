#include <iostream>
#include <vector>

/*
Zadanie 1.21 [1]
Pobierz pięć liczb z klawiatury. Jeżeli tworzą ciąg
rosnący (zgodnie z kolejnością pobierania),
poinformuj o tym. [1]
*/

int main()
{
    std::vector<int> liczby(5);
    bool rosnacy;
    
    for(int i = 0; i < 5; i++)
    {
        std::cin >> liczby[i];
    }
    

    for(int i = 1; i < liczby.size(); i++)
    {
        if(liczby[i] > liczby[i-1])
        {
            rosnacy = true;
        }
        else
        {
            rosnacy = false;
        }
    }
    if(rosnacy)
    {
        std::cout << "Podane liczby tworza ciag rosnacy";
    }
    else
    {
        std::cout << "podane liczby nie tworza ciagu rosnacego";
    }
    
}