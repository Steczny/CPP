#include <iostream>

/*

Zadanie 1.14 [1]
Odgadnij wzór ciągu, a następnie wyświetl jego sto
elementów. Początek ciągu: 3,1,2,1,3,1,2,1,.... [1]include <iostream>
*/

int main()
{
	int ciag[] = {3,1,2,1};

	int rozmiar = sizeof(ciag)/sizeof(ciag[0]);
	int element = 1;

	while(element <=100)
	{
		for(int i = 0; i < rozmiar; i++)
		{
			std::cout << ciag[i] << ",";
			element++;
		}
	}

	return 0;
}
		
