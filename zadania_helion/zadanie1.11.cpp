#include <iostream>

/*
Zadanie 1.11 [1]
Wyświetl liczby całkowite od 100 do 10 włącznie,
pomijając podzielne przez 7. [1]
*/

int main()
{
	for (int i = 100; i >= 10; i--)
	{
		if(i % 7 == 0)
		{
			continue;
		}
		std::cout << i << "\n";
	}

	return 0;
}

