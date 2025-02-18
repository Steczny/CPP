#include <iostream>
#include <vector>

/*
Zadanie 1.20 [1]
Utwórz wektor i wstaw do niego dziesięć
dowolnych liczb. Utwórz drugi wektor, który na
początku zawiera liczby parzyste z pierwszego
wektora, a potem pozostałe. Wyświetl oba wektory.
[1]
*/

int main()
{
	std::vector<int> wektor1 = {1,2,3,4,5,6,7,8,9,10};
	std::vector<int> wektor2;
	
	for(int i = 0; i < wektor1.size(); i++)
	{
		if(wektor1[i] % 2 == 0)
		{
			wektor2.push_back(wektor1[i]);
		}
	}
	for(int i = 0; i < wektor1.size(); i++)
	{
		if(wektor1[i] % 2 != 0)
		{
			wektor2.push_back(wektor1[i]);
		}
	}
	
	for(auto liczba : wektor1)
	{
		std::cout << liczba << " ";
	}
	std::endl;
	for(auto liczba : wektor2)
	{
		std::cout << liczba << " ";
	}
	
	
	return 0;
}