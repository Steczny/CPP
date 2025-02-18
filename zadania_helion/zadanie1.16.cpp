#include <iostream>

/*
Zadanie 1.16 [2]
Odgadnij wzór ciągu, a następnie wyświetl jego sto
elementów. Początek ciągu: 100,99,97,94,90,85,....
[2]
*/

int main()
{
    int ile_razy = 100;
    int i = 1;
    int wartosc = 100;
    
    for(int n = 1; n <= ile_razy; n++)
    {
        std::cout << n << "." << wartosc << "\n";
        wartosc -= i;
        i++;
    }
    
    return 0;
}