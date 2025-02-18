#include <iostream>

/*
Zadanie 1.17 [1]
Odgadnij wzór ciągu, a następnie wyświetl jego sto
elementów. Początek ciągu:
6,2,8,3,10,4,12,5,14,6,.... [1]
*/

int main()
{
    int n1{6};
    int n2{2};
    
    for(int i = 0; i < 100; i++)
    {
        std::cout << n1 << "\n";
        n1 += 2;
        i++;
        std::cout << n2 << "\n";
        n2 += 1;
        
    }
    
    return 0;
}