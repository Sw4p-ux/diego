#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	float val1, val2;
	cout <<"Saisir la premi�re valeur:";
	cin >>val1;

	cout <<"Saisir la deuxi�me valeur:";
	cin >>val2;

	char operateur;
	cout <<"saisir l'op�rateur:";
	cin >>operateur;

	float resultat;
	system("PAUSE");

if (operateur == '/') {
	resultat = val1 / val2;
	cout<< val1 << " " << operateur << " " << val2 << "=" << resultat ;
}
else if (operateur == '-') {
	resultat = val1 - val2;
	cout<< val1 << " " << operateur << " " << val2 << "=" << resultat ;
}
else if (operateur == '+') {
	resultat = val1 + val2;
	cout<< val1 << " " << operateur << " " << val2 << "=" << resultat ;
}
else if (operateur == '*') {
	resultat = val1 * val2;
	cout<< val1 << " " << operateur << " " << val2 << "=" << resultat ;
	}
else {
	system("PAUSE");
		return -1;
	 }

		ofstream fichierLog;
		fichierLog.open("journal.log", ios_base::app);
		fichierLog << val1 << " " << operateur << " " << val2 << "=" << resultat ;
		fichierLog.close();
		system("PAUSE");
		return 0;

}

