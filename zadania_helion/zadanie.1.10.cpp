#include <iostream>

/*
Zadanie 1.10 [1]
Wyświetl liczby całkowite od 1 do 100. Spróbuj
zrobić to, wykorzystując różne pętle (for, while,
do..while). [1]
*/

void gdy(int, int);
void rob_gdy(int,int);
void dla(int, int);

int main()
{
	int liczba_od{1};
	int liczba_do{100};
	
	gdy(liczba_od, liczba_do);
	rob_gdy(liczba_od, liczba_do);
	dla(liczba_od, liczba_do);
	
	return 0;
}

void gdy(int liczba_od, int liczba_do)
{
	std::cout << "WHILE\n";
	while(liczba_od <= liczba_do)
	{
		std::cout << liczba_od << "\n";
		liczba_od++;
	}
}
void rob_gdy(int liczba_od, int liczba_do)
{
	std::cout << "DO While \n";
	do
	{
		std::cout << liczba_od << "\n";
		liczba_od++
	}while(liczba_od != liczba_do + 1);
}
void dla(int liczba_od, int liczba_do)
{
	for(liczba_od; liczba_od <= liczba_do; liczba_od++)
	{
		std::cout << liczba << "\n";
		liczba_od++;
	}
}

