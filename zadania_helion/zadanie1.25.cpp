#include <iostream>
#include <vector>
/*
Zadanie 1.25 [1]
Pobieraj w pętli liczby z klawiatury. Wkładaj je do
wektora V. Wnętrze pętli to następujące kroki:
1. Pobierz liczbę i wprowadź ją na koniec wektora.
2. Pobierz liczbę i wprowadź ją na koniec wektora
(tak, takie same polecenie w ramach kroku
pętli).
3. Jeżeli iloczyn dwóch ostatnich liczb z wektora
nie przekracza 1000, wprowadź również ten
iloczyn do wektora V i wróć do punktu ١., a jeżeli
ten iloczyn przekroczył wartość 1000, zakończ
pętlę. [1]
*/

int main()
{
	std::vector<int> V;
	int podana;
	int podana2;
	
	while(true)
	{
		std::cin >> podana;
		V.push_back(podana);
		std::cin >> podana2;
		V.push_back(podana2);
		
		if(podana * podana2 <= 1000)
		{
			V.push_back(podana * podana2);
		}
		else
		{
			break;
		}
		
	}
	
	return 0;
}
	
	
	
	
		
	