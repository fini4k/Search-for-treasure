// showprim.cpp
// изображает распределение простых чисел
#include <iostream>
using namespace std;
#include <conio.h> // для _getch()

int main()
{
	char dir = 'a';
	int x = 10, y = 10;
	while (dir != '\r')
	{
		cout << "\nВаши координаты: " << x << ", " << y;
		if (x < 5 || x>15)
			cout << "\n Осторожно драконы!";
	
		cout << "\nВыберите напрваление (n,s,e,w): ";
		dir = _getche();
		switch (dir) {
		case 'n': y--; break;
		case 's': y++; break;
		case 'e': x++; break;
		case 'w': x--; break;
		}
		if (x == 7 && y == 11)
		{
			cout << "\nВы нашли клад!\n";
			exit(0);
		}
	}
}





/*
███████╗██╗███╗░░██╗██╗░░██╗██╗██╗░░██╗
██╔════╝██║████╗░██║██║░██╔╝██║██║░██╔╝
█████╗░░██║██╔██╗██║██║██╔╝░██║█████═╝░
██╔══╝░░██║██║╚████║██║███████║██╔═██╗░
██║░░░░░██║██║░╚███║██║╚════██║██║░╚██╗
╚═╝░░░░░╚═╝╚═╝░░╚══╝╚═╝░░░░░╚═╝╚═╝░░╚═╝*/
