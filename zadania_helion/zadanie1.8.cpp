#include <iostream>

/*
Zadanie 1.8 [2]
Pobierz z klawiatury dwie liczby (float) i znak
działania (jeden z tych: *, +, –, /). W zależności od
znaku wykonaj na pobranych dwóch liczbach
odpowiednie działanie i poinformuj o wyniku.
Zwróć uwagę na dzielenie przez 0! Przykład: dla
pobranej liczby 3 i 9.5 oraz znaku + zwróć sumę
12.5. [2]
*/

int main()
{
	float liczba1, liczba2, suma;
	char operator;
	
	std::cout << "Podaj liczbe, operator a nastepnie 2 liczbe,";
	std::cin >> liczba1 >> operator >> liczba2;
	
	switch(operator)
	{
		case '+': suma = liczba1 + liczba2; break;
		case '-': suma = liczba1 - liczba2; break;
		case '/': suma = liczba1 / liczba2; break;
		case '*': suma = liczba1 * liczba2; break;
	}
	
	std::cout << "wynik wynosi: " << suma;

	return 0;
}