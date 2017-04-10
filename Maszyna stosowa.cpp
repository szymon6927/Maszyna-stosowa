// Maszyna stosowa.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"

using namespace std;

struct Wezel { //element listy
	int dane;
	struct Wezel *nastepny;
}*glowa = nullptr;

void wstaw(int);
void usun();
void wyswietl();
void zamiana();
void zdjecie_i_suma();
void zdjecie_i_wstawienie();

int main()
{
	//cout << "Stos jako lista jednokierunkowa << Szymon Miks \n";
	char x;
	
	do {
		x = getchar();


		if (x == 'p') {
			wyswietl();
		}
		else if (x == 'x') {
			usun();
		}
		else if (x == 's') {
			zamiana();
		}
		else if (x == '+') {
			zdjecie_i_suma();
		}
		else if (x == 'r') {
			zdjecie_i_wstawienie();
		}
		else if (x == 'q') {
			break;
		}
		else if (x == ' ' || x == '\n') {
			continue;
		}
		else {
			int y = x - '0'; //konwetuje char do inta

			do
			{
				x = getchar();

				if (x == ' ' || x == '\n')
					break;
																							
				y *= 10; // mno¿ymy poprzedni¹ wartoœæ przez 10 
				y += (x - '0'); // wczytujmey kolejn¹ cyfrê do liczby wiêkszej o 1 rz¹d dziesi¹tek

				// dla inputu 123
				// (((1 * 10) + 2) * 10) + 3 = 100 + 20 + 3

			} while (true);

			wstaw(y);
		}
	} while (x != 'q');
}

void wstaw(int wartosc) {
	//cout << "Wstawiam: " << wartosc << "\n";
	struct Wezel *nowy;
	nowy = new Wezel;
	nowy->dane = wartosc;
	nowy->nastepny = glowa;
	glowa = nowy;
}

void wstaw_za(Wezel* cel, int wartosc) {
	//cout << "Wstawiam: " << wartosc << " za " << cel->dane << "\n";
	struct Wezel *nowy;
	nowy = new Wezel;
	nowy->dane = wartosc;
	nowy->nastepny = cel->nastepny;
	cel->nastepny = nowy;
}

void usun() {
	if (glowa) {
		struct Wezel *temp = glowa;
		glowa = temp->nastepny;
		delete(temp);
	}
}

void wyswietl() {
	if (glowa) {
		struct Wezel *temp = glowa;
		while (temp != nullptr)
		{
			cout << temp->dane << ' ';
			temp = temp->nastepny;
		}
	}
	cout << "\n";
}

void zamiana() {
	struct Wezel *temp = glowa; // T wskazuje na H
	glowa = glowa->nastepny; // H.next wskazuje na B
	temp->nastepny = glowa->nastepny; // A.next wskazuje na C
	glowa->nastepny = temp; // B.next wskazuje na A
}
void zdjecie_i_suma() {
	int x = glowa->dane;
	usun(); // po wykonaniu tej instrukcji glowa to bêdzie jeden element dalej
	int y = glowa->dane;
	usun();
	wstaw(x + y);
}
void zdjecie_i_wstawienie() {
	int n = glowa->dane;
	usun();

	if (n == 0 || n == 1)
		return;
	
	int pocz = glowa->dane;
	Wezel* temp = glowa;
	for (int i = 1; i < n; i++) {
		if (temp->nastepny == nullptr) {
			//cout << "Niemozliwe do wykonania\n";
			return;
		}
		temp = temp->nastepny;
	}
	usun();
	wstaw_za(temp, pocz);
}
