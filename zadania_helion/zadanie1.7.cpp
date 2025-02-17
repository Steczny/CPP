#include <iostream>
#include <vector>
/*
Zadanie 1.7 [1]
Pobieraj znaki z klawiatury aż do wprowadzenia
znaku x. Ile znaków pobrano? [1]
*/
int main()
{
	std::vector<char> znaki;
	char znak;
	int ilosc{0};
	
	std::cout << "Podaj znak, (x by wyjsc)\n";
	
	while(std::cin >> znak && znak != 'x')
	{
		znaki.push_back(znak);
		ilosc++;
	}
	
	std::cout << "Wprowadziles: " << ilosc << "znakow\n";
	std::cout << "Byly to: ";
	
	for(char z : znaki)
	{
		std::cout << z;
	}
	
	return 0;
}