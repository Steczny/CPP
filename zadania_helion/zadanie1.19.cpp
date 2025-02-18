#include <iostream>

/*
Zadanie 1.19 [1]
Wyświetl wszystkie liczby podzielne przez 6 ze
zbioru od 0 do 1000 włącznie. [1]
*/

int main()
{
	for(int i = 0; i <= 1000; i++)
	{
		if(i % 6 == 0)
		{
			std::cout << i << "\n";
		}
	}
	
	return 0;
}