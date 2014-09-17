#include <iostream>
using namespace std;
// vakiot
#define MINIMI 10 // vanha
const int MAKSIMI = 20; // uusi

//julkiset muuttujat
int summa;

//aliohjelmat
void Laske(int, int);

void main() //p‰‰ohjelma alkaa
{ //alkava lohkosulku
	// paikallisten muuttujien m‰‰rittely
	int luku1 = 2;
	int luku2;
	cout << "Syota luku: ";
	cin >> luku2;
	
	Laske(luku1, luku2); //aliohjelman kutsu
	if (summa < MINIMI)
		cout << "Summa on pienempi kuin " << MINIMI;
	if (summa > MAKSIMI)
		cout << "Summa on suurempi kuin " << MAKSIMI;
	else
		cout << "Summa on " << MINIMI << "ja " << MAKSIMI << "valissa";
} //lopettava lohkosulku
void Laske(int eka, int toka)
{
	summa = eka + toka;
}