#include <iostream>

/* 
Zadanie 1.18 [1]
Pobieraj liczbę z klawiatury i wyświetlaj jej
dwukrotność. Operację powtarzaj, dopóki nie
zostanie wpisana wartość pomiędzy 1 a 10
włącznie. [1]
*/

int main()
{
	int liczba;
	
	while(std::cin >> liczba && (liczba < 1 || liczba > 10))
	{
		std::cout << liczba * 2 << "\n";
	}
	
	return 0;
}