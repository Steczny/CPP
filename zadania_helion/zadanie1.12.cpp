#include <iostream>

/*
Zadanie 1.12 [1]
Wyświetl liczby całkowite od -25 do 25 z
pominięciem 0. [1]
*/

int main()
{
	for(int i = -25; i <= 25; i++)
	{
		if(i == 0)
		{
			continue;
		}
		std::cout << i << "\n";
	}
}
	
