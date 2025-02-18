#include <iostream>

/*
zadaniee 1.15 [2]
Odgadnij wzór ciągu, a następnie wyświetl jego sto
elementów. Początek ciągu:
1,2,2,3,3,3,4,4,4,4,.... [2]
*/

int main()
{

	int element{1};
	int wyraz{1};
	
	while(element <= 100)
	{
		for(int i = 1; i <= wyraz; i++)
		{
			std::cout << wyraz << "\n";
			element++;
		}
		wyraz++;
	}

	return 0;
}
