#include "joc21.h"

void CJoc21::initializare_carti() {
	string suite[] = { "trefla","inima","romb","frunza" };
	int a = 2;
	int m = 0;
	for (int k = 0;k < 13;k++) {
		int j = 0;
		for (int i = 0;i < 4;i++) {
			pachet[m].suita = suite[j];
			pachet[m].valoare = a;
			m++;
			j++;
		}
		a++;
	}	
}

void CJoc21::extragere() {
	int var1 = 0;
	int var2 = 0;
	int x, y;
	bool a = true;
	while (1) {
		cout << "Primul jucator" << endl;
		cout << "Extrageti carte(1-52):";
		cin >> x;
		pachet[x-1].stare_curenta = true;
		cout << pachet[x-1].suita << " " << pachet[x-1].valoare << " " << pachet[x-1].stare_curenta << endl;
		cout << "Al doilea jucator" << endl;
		cout << "Extrageti carte(1-52):";
		cin >> y;
		pachet[y-1].stare_curenta = true;
		cout << pachet[y-1].suita << " " << pachet[y-1].valoare << " " << pachet[y-1].stare_curenta << endl;
		if ((var1 + pachet[x - 1].valoare > 21) && (var2 + pachet[y - 1].valoare > 21)) {
			break;
		}
		else {
			var1 += pachet[x - 1].valoare;
			var2 += pachet[y - 1].valoare;
		}
	}
	cout << var1 << " " << var2 << endl;
	if (var1 > 21) {
		cout << "Castigator jucatorul 2,felicitari !";
	}
	else if (var2 > 21) {
		cout << "Castigator jucatorul 1,felicitari !";
	}
	else if (var1 > var2) {
		cout << "Castigator jucatorul 1,felicitari !";
	}
	else if (var1 == var2) {
		cout << "Egalitate";
	}
	else if (var1 < var2) {
		cout << "Castigator jucatorul 2,felicitari !";
	}
}