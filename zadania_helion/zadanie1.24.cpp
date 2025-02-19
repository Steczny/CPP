#include <iostream>
#include <vector>

/*
Zadanie 1.24 [2]
Pobieraj z klawiatury znaki (bez polskich ogonków i
bez dużych liter) i wprowadzaj je do wektora
według zasady: samogłoski zawsze na początku
wektora, pozostałe znaki na końcu wektora. Jeżeli
pojawi się znak * lub #, nie wstawiaj ich, tylko usuń
z wektora pierwszy znak (dla *) lub ostatni (dla #), o
ile jest co usuwać. Zakończ pętlę pobierania i
wstawiania, gdy wprowadzony będzie znak !. [2]
*/

int main()
{
    std::vector<char> samogloski = {'a','e','i','o','u','y'};
    std::vector<char> znaki;
    char wprowadzony;
    std::vector<char> znaki_sort;
    
    std::cout << "DODAWAJ ZNAKI (BEZ DUZYCH LITER I POLSKICH ZNAKOW) (* ususwa pierwszy) (# usuwa ostatni) (! konczy wprowadzanie)\n";
    while(std::cin >> wprowadzony && wprowadzony != '!')
    {
        if(wprowadzony == '*')
        {
            if(znaki.empty())
            {
                std::cout << "ta wartosc juz jest pusta";
            }
            else
            {
                znaki.erase(znaki.begin());
            }
        }
        else if(wprowadzony == '#')
        {
            if(znaki.empty())
            {
                std::cout << "ta wartosc juz jest pusta";
            }
            else
            {
                znaki.pop_back();
            }
            
        }
        if(wprowadzony != '#' && wprowadzony != '!' && wprowadzony != '*')
        {
            znaki.push_back(wprowadzony);
        }
        std::cout << "znaki wprowadzone: ";
        for(auto symbol : znaki)
        {
            std::cout << symbol << " ";
        }
        std::cout << "\n";
    
    }
    
    for(int i = 0; i < znaki.size(); i++)
    {
        for(int j = 0; j < samogloski.size(); j++)
        {
            if(znaki[i] == samogloski[j])
            {
                znaki_sort.push_back(znaki[i]);

            }
        }
    }
    
    for(int i = 0; i < znaki.size(); i++)
    {
        bool samogloska = false;
        for (int j = 0; j < samogloski.size(); j++)
        {
            if(znaki[i] == samogloski[j])
            {
                samogloska = true;
                break;
            }
        }
        if(!samogloska)
        {
            znaki_sort.push_back(znaki[i]);
        }
    }

    std::cout << "posortowane wprowadzone znaki: ";
    for(auto znak : znaki_sort)
    {
        std::cout << znak << " ";
    }
    
    return 0;
}