#include <iostream>

/*
Zadanie 1.9 [1]
Pobierz liczbę całkowitą z klawiatury i wykonaj na
niej poniższe operacje: jeżeli liczba była ujemna,
zmniejsz ją o 1; jeżeli liczba była dodatnia, zwiększ
ją o 1; jeżeli była zerem, pozostaw bez zmian;
Wyświetl liczbę po zmianach. Następnie określ
parzystość liczby po zmianach i wyświetl informację
na ten temat (tak/nie). [1]
*/

int main()
{
	int liczba;
	
	std::cout << "Podaj liczbe: ";
	std::cin >> liczba;
	
	if(liczba < 0)
	{
		liczba--;
	}
	else if(liczba > 0)
	{
		liczba++;
	}
	else
	{
		//nop
	}
	
	if(liczba % 2 == 0)
	{
		std::cout << liczba << " tak jest parzysta\n";
	}
	else
	{
		std::cout << liczba << " nie jest parzysta \n";
	}


		return 0;
}