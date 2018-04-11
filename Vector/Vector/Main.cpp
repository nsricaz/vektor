#include"MojVector.h"
#include<fstream>

/*Implementirajte svoj jednostavni vektor cijelih brojeva.
Neka strategija povećanja kapaciteta bude da je novi
kapacitet uvijek za 50% veći od dosadašnjeg. Na vektoru
definirajte sljedeće operacije:
a) Kreiranje vektora i njegova inicijalizacija pomoću liste
b) Dohvat veličine i kapaciteta
c) Umetanje elementa na kraj
d) Dohvat elementa na mjestu i
*/


//20 20 0 0 0 10


int main() {
	Moj_Vector je = { 1,2,3,4,5 };

	cout << "c:" << je.size() << "-" << "s:" << je.capacity() << endl;
	je.push_back(10);

	cout << "c:" << je.size() << "-" << "s:" << je.capacity() << endl;
	cout << je.at(5) << endl;
	Moj_Vector ja(3);
	cout << ja.size();
	Moj_Vector jo(4, 5);

	for (int i = 0; i < jo.size(); i++)
	{
		cout << jo[i] << endl;
	}

}